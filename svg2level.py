# coding=utf-8

import os
import struct
import sys
import re
from math import sqrt

from xml.dom import minidom

glyphs = {}

doc = minidom.parse('LEVEL-320x200.svg')

polygons = []
for path in doc.getElementsByTagName('path'):
    g = path.parentNode

    #if path.getAttribute('id') != 'path919':
    #    continue

    d = path.getAttribute('d')
    #commands = re.findall(r'[A-Za-z]|-?[0-9]+(?:\.[0-9]+)?', d)
    commands = []
    for command in d.split():
        for arg in command.split(','):
            commands.append(arg)

    label = g.getAttribute('inkscape:label')

    color = (0, 0, 0)

    style = path.getAttribute('style')
    for attr in style.split(';'):
        name, value = attr.split(':')
        if name == 'fill':
            assert len(value) == 7
            assert value[0] == '#'
            value = value[1:]
            r = int(value[0:2], 16)
            g = int(value[2:4], 16)
            b = int(value[4:6], 16)
            color = (r, g, b)

    points = []

    def save_polygon():
        if len(points) > 0:
            polygons.append((label, color, points))

    # https://www.w3.org/TR/SVG/paths.html
    # https://pomax.github.io/bezierinfo/

    # svg fill-rule default is "nonzero":
    #  - https://en.wikipedia.org/wiki/Nonzero-rule
    #  - https://www.cs.rit.edu/~icss571/filling/alt_parity.html

    # TODO:
    #  - split long curves into multiple line segments

    x = 0
    y = 0

    n = len(commands)
    i = 0
    while i < n:
        if commands[i] == 'm':
            i = i + 1
            while i < n and not re.match(r'^[A-Za-z]$', commands[i]):
                # Move the current point to the coordinate x,y
                nx = x + float(commands[i + 0])
                ny = y + float(commands[i + 1])
                points.append((nx, ny))
                x, y = nx, ny
                i += 2
        elif commands[i] == 'M':
            i = i + 1
            while i < n and not re.match(r'^[A-Za-z]$', commands[i]):
                # Move the current point to the relative coordinate x,y
                x = float(commands[i + 0])
                y = float(commands[i + 1])
                points.append((x, y))
                i += 2
        elif commands[i] == 'v':
            i = i + 1
            while i < n and not re.match(r'^[A-Za-z]$', commands[i]):
                # Draw a vertical line from the current point to the end
                # point, which is specified by the current point shifted by
                # dy along the y-axis and the current point's x coordinate
                ny = y + float(commands[i + 0])
                points.append((x, ny))
                y = ny
                i += 1
        elif commands[i] == 'V':
            i = i + 1
            while i < n and not re.match(r'^[A-Za-z]$', commands[i]):
                # Draw a vertical line from the current point to the end
                # point, which is specified by the current point shifted by
                # dy along the y-axis and the current point's x coordinate
                y = float(commands[i + 0])
                points.append((x, y))
                i += 1
        elif commands[i] == 'H':
            # Draw a horizontal line from the current point to the
            # end point, which is specified by the current point
            # shifted by dx along the x-axis and the current point's
            # y coordinate
            x = float(commands[i + 1])
            points.append((x, y))
            i += 2
        elif commands[i] == 'h':
            # Draw a horizontal line from the current point to the
            # end point, which is specified by the current point
            # shifted by dx along the x-axis and the current point's
            # y coordinate
            nx = x + float(commands[i + 1])
            points.append((nx, y))
            x = nx
            i += 2
        elif commands[i] == 'q':
            # https://www.w3.org/TR/SVG/paths.html#PathDataQuadraticBezierCommands

            # Draw a quadratic Bézier curve from the current point to
            # the end point, which is the current point shifted by dx
            # along the x-axis and dy along the y-axis
            nx = x + float(commands[i + 3])
            ny = y + float(commands[i + 4])
            points.append((nx, ny))
            x, y = nx, ny
            i += 5
        elif commands[i] == 't':
            # Draw a smooth quadratic Bézier curve from the current
            # point to the end point specified by x,y
            nx = x + float(commands[i + 1])
            ny = y + float(commands[i + 2])
            points.append((nx, ny))
            x, y = nx, ny
            i += 3

        elif commands[i] == 'L':
            i = i + 1
            while i < n and not re.match(r'^[A-Za-z]$', commands[i]):
                # Draw a line from the current point to the end point,
                # which is the current point shifted by dx along the x-axis
                # and dy along the y-axis
                x = float(commands[i + 0])
                y = float(commands[i + 1])
                points.append((x, y))
                i += 2

        elif commands[i] == 'l':
            i = i + 1
            while i < n and not re.match(r'^[A-Za-z]$', commands[i]):
                # Draw a line from the current point to the end point,
                # which is the current point shifted by dx along the x-axis
                # and dy along the y-axis
                nx = x + float(commands[i + 0])
                ny = y + float(commands[i + 1])
                points.append((nx, ny))
                x, y = nx, ny
                i += 2

        elif commands[i] in ['Z', 'z']:
            # Close the current subpath by connecting the last point of
            # the path with its initial point
            x, y = points[0]
            points.append((x, y))
            save_polygon()
            points = []
            i += 1

        else:
            assert False, "Unknown command: %r" % (commands[i:], )

    save_polygon()

with open('level.dat', 'wb') as f:
    f.write(struct.pack('<i', len(polygons)))

    for label, color, points in polygons:
        f.write(struct.pack('<ffff', *(color + (0, ))))
        f.write(struct.pack('<i', int(label == 'Geometry')))
        f.write(struct.pack('<i', len(points)))
        for x, y in points:
            f.write(struct.pack('<ff', x, y - 97))

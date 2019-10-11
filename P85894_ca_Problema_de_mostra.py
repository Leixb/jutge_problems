#!/usr/bin/env python3

from PIL import Image, ImageDraw

def rect(x1, y1, x2, y2, col):
    dib.polygon([(x1, y1), (x2, y1), (x2, y2), (x1, y2)], col)

col = input()
n = int(input())
img = Image.new('RGB', (400, 4*n), 'Beige')
dib = ImageDraw.Draw(img)

rect(0, 3*n, 149, 4*n - 1, col)

dib.ellipse([250, n, 399, 3*n - 1], 'Yellow', 'Red')

dib.polygon([(399, 4*n - 1), (200, 4*n - 1), (399, 3*n)], 'Orange')

for x in range (0, 200):
    for y in range(0, 2*n):
        dib.point((x, y), (0, x, 0))

img.save('output.png')

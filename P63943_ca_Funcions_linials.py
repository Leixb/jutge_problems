#!/usr/bin/env python3

from PIL import Image, ImageDraw

from math import sin

def calc(rx, ry, x, y):
    return int(rx*x + ry*y)%256

m, n, rx, ry, gx, gy, bx, by = int(input()), int(input()), int(input()), int(input()), int(input()), int(input()), int(input()), int(input())

img = Image.new('RGB', (m, n))

dib = ImageDraw.Draw(img)

for i in range(m):
    for j in range(n):
         dib.point((i, j), (calc(rx, ry, i, j), calc(gx, gy, i, j), calc(bx, by, i, j)))

img.save('output.png')

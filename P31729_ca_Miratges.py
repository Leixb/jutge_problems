#!/usr/bin/env python3

from PIL import Image, ImageDraw

from math import sin

def calc(rx, ry, x, y, d):
    return int(rx*sin(x/d) + ry*sin(y/d))%256

m, n, d, rx, ry, gx, gy, bx, by = int(input()), int(input()), int(input()), int(input()), int(input()), int(input()), int(input()), int(input()), int(input())

img = Image.new('RGB', (m, n))

dib = ImageDraw.Draw(img)

for i in range(m):
    for j in range(n):
         dib.point((i, j), (calc(rx, ry, i, j, d), calc(gx, gy, i, j, d), calc(bx, by, i, j, d)))

img.save('output.png')

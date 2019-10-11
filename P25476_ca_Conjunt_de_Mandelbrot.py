#!/usr/bin/env python3

from PIL import Image, ImageDraw

c1, c2 = input(), input()
x1, x2, y1, y2, e, k = int(input()), int(input()), int(input()), int(input()), int(input()), int(input())

n, m = x2-x1+1, y2-y1+1

img = Image.new("RGB", (n, m))
dib = ImageDraw.Draw(img)

def f(cx, cy, zx, zy):
    return zx**2 - zy**2 + cx,  2*zx*zy + cy

def q(x, y):
    return x**2 + y**2

def cumpleix(cx, cy, k):
    x, y = cx, cy
    for i in range(k):
        if q(x, y) > 4:
            return False
        x, y = f(cx, cy, x, y)
    return True

for i in range(n):
    for j in range(m):
        if cumpleix((x1+i)/e, (y1+j)/e, k):
            dib.point((i, j), c1)
        else:
            dib.point((i, j), c2)

img.save("output.png")


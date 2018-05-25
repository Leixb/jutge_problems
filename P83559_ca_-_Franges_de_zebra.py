#!/usr/bin/env python3

from PIL import Image, ImageDraw

from math import sin

def calc(rx, ry, x, y, d):
    return int(rx*sin(x/d) + ry*sin(y/d))%256

def square(x, y, r, col):
    dib.polygon([(x, y), (x+r, y), (x+r, y+r), (x, y+r)], col)

n, m = int(input()), int(input())

img = Image.new('RGB', (n*105+50+5, m*105+5), 'Gray')
dib = ImageDraw.Draw(img)

for x in range(n):
    for y in range(m):
        cas = y%4
        if cas == 3: cas = 1
        col = 'Black' if x%2==0 else 'White'
        square(5+x*105+cas*25, 5+y*105, 100, col)


img.save('output.png')

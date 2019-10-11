#!/usr/bin/env python3

from PIL import Image, ImageDraw

from math import sin

n = int(input())

k = 250//n

def centered_ellipse(dib, x, y, dx, dy, c1, c2):
    dib.ellipse((x-dx/2, y-dy/2, x+dx/2-1, y + dy/2-1), c1, c2)

def colored_ellipse(dib, x, y, dx, dy, col):
    centered_ellipse(dib, x, y, dx, dy, col, 'Black')

img = Image.new('RGB', (1000, 1000), 'White')

dib = ImageDraw.Draw(img)

for i in range(n):
    col = (250 - k*i, 0, k*(i+1))
    colored_ellipse(dib, 500, 500, 4*k*(i+1), 1000-4*k*i, col)

img.save('output.png')

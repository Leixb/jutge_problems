#!/usr/bin/env python3

from PIL import Image, ImageDraw

n = int(input())

img = Image.new('RGB', (8*n, 8*n), 'White')

def make_circle(dib, x, y, r, color):
    dib.ellipse([x-r, y-r, x+r-1, y+r-1], color)

colors = ['Blue', 'Yellow', 'Red', 'Green']

dib = ImageDraw.Draw(img)

for i, col in enumerate(colors):
    make_circle(dib, 4*n, 4*n, n*(4-i), col)

img.save('output.png')

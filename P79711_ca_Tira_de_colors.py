#!/usr/bin/env python3

from PIL import Image, ImageDraw

n = int(input())

img = Image.new('RGB', (50*n, 50))

dib = ImageDraw.Draw(img)

for i in range(n):
    col = input()
    dib.rectangle([(50*i, 0), (50*(i+1), 50-1)], col)

img.save('output.png')

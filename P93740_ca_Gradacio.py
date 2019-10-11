#!/usr/bin/env python3

from PIL import Image, ImageDraw

n = int(input())

img = Image.new('RGB', (256, 256))

dib = ImageDraw.Draw(img)

for i in range(256):
    for j in range(256):
         dib.point((i, j), (i, n, j))

img.save('output.png')

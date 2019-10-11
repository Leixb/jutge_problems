#!/usr/bin/env python3

from PIL import Image, ImageDraw

from math import sin

f, c = int(input()), int(input())

img = Image.new('RGB', (100*f, 100*c), 'Yellow')

dib = ImageDraw.Draw(img)


for i in range(f):
    for j in range(c):
        if i%2 != j%2:
            dib.rectangle([(i*100, j*100), ((i+1)*100-1, (1+j)*100-1)], 'Green')

img.save('output.png')

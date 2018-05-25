#!/usr/bin/env python3

from PIL import Image, ImageDraw

from math import sin

n = int(input())

w = n*175-25

img = Image.new('RGB', (w, w), 'White')

dib = ImageDraw.Draw(img)

for i in range(n-1):
    dib.polygon([(150 + 175*i, 0-1), (150+175*i, w-1), (150+175*i+25-1, w-1), (150+175*i + 25-1, 0-1)], 'Grey')
    dib.polygon([(0-1, 150 + 175*i), (w-1, 150+175*i), (w-1, 150+175*i+25-1), (0-1, 150+175*i + 25-1)], 'Grey')

for i in range(n-1):
    for j in range(n-1):
        print(i, j)
        dib.ellipse([150+175*i, 150+175*j, 150+175*i+25-1, 150+175*j+25-1], 'Black')
        print([150+175*i, 150+175*j, 150+175*i+25, 150+175*j+25])

img.save('output.png')

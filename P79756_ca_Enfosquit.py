#!/usr/bin/env python3

from PIL import Image, ImageDraw

r, g, b = int(input()), int(input()), int(input())

img = Image.new('RGB', (900, 300))

colors = ['Blue', 'Yellow', 'Red', 'Green']

dib = ImageDraw.Draw(img)

for i in range(6):
    dib.rectangle([(150*i, 0), (150*(i+1)-1, 300-1)], ((5-i)*r//5, (5-i)*g//5, (5-i)*b//5))

img.save('output.png')

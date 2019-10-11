#!/usr/bin/env python3

from PIL import Image, ImageDraw

n,m = int(input()), int(input())

img = Image.new('RGB', (n, 9*m), 'Yellow')
dib = ImageDraw.Draw(img)

for i in range(1, 10, 2):

    dib.polygon([(0, m*i), (0, m*(i+1)-1), (n, m*(i+1)-1), (n, m*i)], 'Red')

img.save('output.png')

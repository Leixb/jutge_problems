#!/usr/bin/env python3

from PIL import Image, ImageDraw

n, c = int(input()), int(input())

l = []

for _ in range(c): l.append(input())

img = Image.new('RGB', (50*n, 50*n))

dib = ImageDraw.Draw(img)

for i in range(n//2+n%2):
    dib.rectangle([(50*i, 50*i), (50*(n-i)-1, 50*(n-i)-1)], l[i%c])

img.save('output.png')

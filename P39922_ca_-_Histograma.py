#!/usr/bin/env python3

from PIL import Image, ImageDraw, ImageOps

from math import sin

bg, fg = input(), input()

n = int(input())

l = []

for _ in range(n):
    l.append(int(input()))

img = Image.new('RGB', (100+50*len(l), 100+50*max(l)), bg)

dib = ImageDraw.Draw(img)

for i, v in enumerate(l):
    dib.rectangle([(50+i*50, 50), (50+i*50+50-1, 50 + 50*v-1)], fg)

img = ImageOps.flip(img)

img.save('output.png')



#!/usr/bin/env python3

from PIL import Image, ImageDraw

f, t, n, m = input(), input(), int(input()), int(input())

img = Image.new('RGB', (n, m), f)
dib = ImageDraw.Draw(img)

dib.polygon([(0,0), (n/2, n/2), (n-1, 0)], t)

img.save('output.png')

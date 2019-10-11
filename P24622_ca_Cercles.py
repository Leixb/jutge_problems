#!/usr/bin/env python3

from PIL import Image, ImageDraw

c1, c2, c3, n, k = input(), input(), input(), int(input()), int(input())

img = Image.new('RGB', (n, n), c1)

dib = ImageDraw.Draw(img)

m = 0

while n-m >= 0:
    dib.ellipse([m, m, n-m-1, n-m-1], c2, c3)

    m += k

img.save('output.png')

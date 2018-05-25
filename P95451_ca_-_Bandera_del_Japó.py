#!/usr/bin/env python3

from PIL import Image, ImageDraw

img = Image.new('RGB', (600, 400), 'White')
dib = ImageDraw.Draw(img)

dib.ellipse([150, 50, 449, 349], 'Crimson')

img.save('output.png')

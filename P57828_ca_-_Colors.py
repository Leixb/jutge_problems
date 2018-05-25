#!/usr/bin/env python3

from PIL import Image, ImageDraw

img = Image.new('RGB', (500, 500), input())

img.save('output.png')

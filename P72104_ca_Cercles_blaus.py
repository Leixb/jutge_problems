#!/usr/bin/env python3

from PIL import Image, ImageDraw

n, m = int(input()), int(input())

img = Image.new("RGB", (120*n, 120*m), 'YellowGreen')

dib = ImageDraw.Draw(img)

def circle(x, y, r, col):
    dib.ellipse([x, y, x+2*r-1, y+2*r-1], col)

for i in range(n):
    for j in range(m):
        dx, dy = 10, 10
        k = i+j

        if k%4 == 0:    dx, dy = 14, 0
        elif k%4 == 1:  dx, dy = 10, -10
        elif k%4 == 2:  dx, dy = 0, -14
        else:           dx, dy = -10, -10

        if k%8 >= 4: dx, dy = -dx, -dy

        circle(20+120*i+dx, 20+120*j+dy, 40, 'White')
        circle(20+120*i-dx, 20+120*j-dy, 40, 'Black')
        circle(20+120*i, 20+120*j, 40, 'Blue')

img.save("output.png")


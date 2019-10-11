#!/usr/bin/python
n = int(raw_input())

s = n%60
m = n/60
h = m/60
m = m%60

print h,m,s


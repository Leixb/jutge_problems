from math import sqrt

def absValue(nume): return nume if nume > 0 else -1*nume

def power(a,b): return a**b

def isPrime(a):
    if a<=1: return False
    else :
        for i in range(2,int(sqrt(a)+1)) : 
            if a%i==0: return False
    return True

def slowFib(n): return slowFib(n-1)+slowFib(n-2) if (n>1) else n

def quickFib(n):
    a, b = 0, 1
    for _ in range(1, n):
        a, b = b, a+b
    return b if n != 0 else 0

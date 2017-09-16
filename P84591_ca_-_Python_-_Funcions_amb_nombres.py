from math import sqrt

def absValue(nume): return nume if nume > 0 else (-1*nume)

def power(a,b): return a**b

def isPrime(a):
    if (a<=1) : return False
    else : 
        for i in range(2,int(sqrt(a)+1)) : 
            if (a%i==0): return False
    return True

def slowFib(n): return slowFib(n-1)+slowFib(n-2) if (n>1) else n

def quickFib(n):
    a,b,c=0,1,1
    while (c<n): a,b,c=b,a+b,c+1
    return b if n != 0 else 0

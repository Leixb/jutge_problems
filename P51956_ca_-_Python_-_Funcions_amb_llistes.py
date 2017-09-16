def myLength(L):
    return len(L)

def myMaximum(L):
    return max(L)

def average(L):
    return sum(L)/len(L)

def buildPalindrome(L):
    return L[::-1]+L

def remove(L1,L2):
    return [x for x in L1 if not x in L2]

def flatten(L):
    res = []
    for i in L:
        if (isinstance(i,list)) :
            res += flatten(i)
        else :
            res += [i]
    return res

def oddsNevens(L):
    return ([x for x in L if x % 2 == 1], [x for x in L if x % 2 == 0])

def primeDivisors(n):
    i = 2
    res = []
    while (n > 1):
        if (n%i==0):
            res.append(i)
            n/=i
            while (n%i==0) : n/=i
        i+=1
    return res


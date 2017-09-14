#include <iostream>
#include <map>
using namespace std;

#define lint unsigned long long

lint x,y;
map <lint,lint> m;

lint collatz (lint n, lint c=1) {
    if (n > (10e7)) return n;
    if (m[n]!=0) return c-m[n];
    m[n]=c;
    if (n%2==0) return collatz(n/2+x,c+1);
    return collatz(n*3+y,c+1);
}

int main () {
    lint n;
    while (cin >> x >> y >> n) {
        cout << collatz(n) << endl;
        m.clear();
    }
}

#include <iostream>
#include <vector>
using namespace std;

#define lint long long
#define D(x) cerr << '[' << __FUNCTION__ << ']' << '[' << __LINE__ << ']' << ' ' << #x << " = " << x << endl;

lint mod = 10e7+7;

vector <lint> v {0,1};

lint fib (lint n) {
    if (v[n]!=0 or n==0) return v[n];
    v[n] = (fib(n-1)+fib(n-2))%mod;
    return v[n];
}

int main () {
    size_t n;
    while (cin >> n) {
        if (n>=v.size()) v.resize(n+1);
        cout << fib(n) << endl;
    }
}

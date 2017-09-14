#include <iostream>
#include <vector>
using namespace std;

int m;

long pow (long n, long k) {
    long r = 1;
    while (k!=0) {
        if (k&1) r*=n;
        n*=n;
        k>>=1;
        r%=m;
        n%=m;
    }
    return r;
}

int main () {
    long n,k;
    while (cin >> n >> k >> m) cout << pow(n,k) << endl;
}

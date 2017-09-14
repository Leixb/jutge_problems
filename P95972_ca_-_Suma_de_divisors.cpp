#include <iostream>
#include <math.h>
using namespace std;

int suma_divisors(int x) {
    int res = 0;
    int n = int(ceil(sqrt(x)));
    for (int i = 1; i < n; i++) if (x%i == 0) res += i + x/i;
    if (sqrt(x)-n == 0.0) res += n;
    return res;
}

int main () {
    int n;
    while (cin >> n) cout << suma_divisors(n) << ' ' << n << endl;
}
/*
8 4 2 1
8 -> 15
8 + 4 + 2 + 1

*/
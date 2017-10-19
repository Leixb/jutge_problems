#include <bits/stdc++.h>
using namespace std;

template <typename T>
T gcd (T a, T b) { return (b==0)? a : gcd(b,a%b); }

int main () {
    int mx, h, inc;
    while (cin >> mx >> h >> inc and mx != 0) cout << ((gcd(mx,inc) != 1)? "dolenta" : "bona") << endl;
}

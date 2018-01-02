#include <bits/stdc++.h>
using namespace std;

template <typename T>
T gcd (const T& a, const T& b) { return b? gcd(b, a%b) : a; }

int main () {
    for (int n; cin >> n and n;) {
        int x;
        cin >> x;
        for (int _x; --n and cin >> _x;) x = x*_x/gcd(x, _x);
        cout << x << endl;
    }
}

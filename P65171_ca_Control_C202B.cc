#include <bits/stdc++.h>
using namespace std;

int main () {
    cout.setf(ios::fixed); cout.precision(2);
    double n, x, a = 0, b = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a+=x*x;
        b+=x;
    }
    cout << 1.0/(n - 1)*a - 1.0/(n*(n-1))*b*b << endl;
}


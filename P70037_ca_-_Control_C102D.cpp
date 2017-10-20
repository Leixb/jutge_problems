#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    if (b) cout << fixed << setprecision(3) << double(a)/double(b) << ' ' << a/b << ' ' << a%b << endl;
    else cout << "divisio per zero" << endl;
}

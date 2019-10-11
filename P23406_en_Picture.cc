#include <bits/stdc++.h>
using namespace std;

int main () {
    int x, y, n;
    while (cin >> x >> y >> n) {
        if ( x < y ) swap(x, y);
        int amn = -1;
        while (n--) {
            int a, b;
            cin >> a >> b;
            if ( a < b ) swap(a, b);
            if (a >= x and b >= y) {
                if (amn < 0) amn = a*b;
                else amn = min(amn, a*b);
            }
        }
        cout << amn << endl;
    }
}

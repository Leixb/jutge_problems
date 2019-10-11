#include <bits/stdc++.h>
using namespace std;

int main () {
    int h,m;
    while (cin >> h >> m) {
        if (h > 12) h-=12;
        else if (h==0) h = 12;

        if (h == 12 and m != 0) {
            if (m <= 15) cout << 105 - m << ' ' << 7 << endl;
            else cout << 120 - m << ' ' << 3 - (m-1)/15 + 1 + 3 + 2 << endl;
        } else if (h == 1) {
            if (m == 0) cout << 60 << ' ' << 6 << endl;
            else cout << 60 - m << ' ' << 3 - (m-1)/15 + 2 << endl;
        } else {
            if (m == 0) cout << 0 << ' ' << h << endl;
            else cout << 60-m << ' ' << 3 - (m-1)/15 + h + 1 << endl;
        }
    }
}

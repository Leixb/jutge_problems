#include <bits/stdc++.h>
using namespace std;

int main () {
    int a=-1, b=-1, c;
    while (cin >> c and c!=0) {
        if (a != -1 and b > a and b > c and b>3143) {
            cout << "SI" << endl;
            return 0;
        }
        a = b;
        b = c;
    }
    cout << "NO" << endl;
}

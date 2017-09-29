#include <bits/stdc++.h>
using namespace std;

int main () {
    int b,n;
    while (cin >> b >> n) {
        int c = 0;
        while (n > 0) {
            n/=b;
            ++c;
        }
        cout << c << endl;
    }
}

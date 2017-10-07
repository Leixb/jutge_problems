#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        bool p=0,s=0;
        while (n--) {
            int m;
            cin >> m;
            p |= m%2==0;
            s |= m%2;
        }
        cout << ((p and s)? "si" : "no") << endl;
    }
}

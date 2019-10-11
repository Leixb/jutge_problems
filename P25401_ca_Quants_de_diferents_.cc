#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        map <int, bool> M;
        int num, cnt=0;
        while (n--) {
            cin >> num;
            if (not M[num]) {
                ++cnt;
                M[num]=true;
            }
        }
        cout << cnt << endl;
    }
}

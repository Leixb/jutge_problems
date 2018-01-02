#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        int num, low=0, hi=501;
        char c;
        for (int i = 9; i > 0; --i) {
            cin >> num >> c;
            if (c == '-') hi = min(num, hi);
            else low = max(low, num);
        }
        if (low+1 == hi-1) cout << low + 1 << endl;
        else cout << '?' << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    stack<int> S;
    for (int n; cin >> n;) {
        if (n == -1) {
            if (!S.empty()) {
                cout << S.top();
                S.pop();
            }
            while (!S.empty()) {
                cout << ' ' << S.top();
                S.pop();
            }
            cout << endl;
        } else S.push(n);
    }
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    int shit;
    cin >> shit;
    vector <int> v;
    bool first = true;
    for (int n; cin >> n;) {
        if (n < 0) {
            if (!first) cout << ' ';
            else first = false;
            cout << n;
        }
        else v.push_back(n);
    }
    for (const int& val : v) cout << ' ' << val;
    cout << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    vector <int> v(k, 0);
    while (n--) {
        int m;
        cin >> m;
        ++v[m];
    }
    for (int i = 0; i < k; ++i) {
        if (i != 0) cout << ", ";
        cout << i << ':' << v[i];
    }
    cout << '.' << endl;
}

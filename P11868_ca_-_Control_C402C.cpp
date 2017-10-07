#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> index (n), v (n), w(n);
    for (int i = 0; i < n; ++i) cin >> w[i];
    for (int i = 0; i < n; ++i) cin >> index[i];
    for (int i = 0; i < n; ++i) v[index[i]] = w[i];
    for (int i = 0; i < n; ++i) 
        if (i!=0) cout << " " << v[i];
        else cout << v[i];
    cout << endl;
}

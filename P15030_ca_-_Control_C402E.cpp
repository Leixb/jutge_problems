#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,p,k;
    char c;
    cin >> n >> p >> k >> c;
    vector <string> v (n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    if (c=='d')
        for (int i = 1; i <= k; ++i) {
            int sum = p+i;
            if (sum >= n) sum -= n;
            if (i!=1) cout << ' ';
            cout << v[sum];
        }
    else
        for (int i = -1; i >= -k; --i) {
            int sum = p+i;
            if (sum < 0) sum += n;
            if (i!=-1) cout << ' ';
            cout << v[sum];
        }
    cout << endl;
}

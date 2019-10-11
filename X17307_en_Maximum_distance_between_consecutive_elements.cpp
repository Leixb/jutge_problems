#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n;) {
        int a, mx_dist = 0;
        cin >> a;
        for (int b, i=1; i < n and cin >> b; a = b, ++i) mx_dist = max(mx_dist, (b > a)? b-a : a-b);
        cout << mx_dist << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n;) {
        int prev, sum=0;
        cin >> prev;
        for (int i = 1, a; i < n and cin >> a; ++i) {
            if (a%2 == 0) sum += prev;
            prev = a;
        }
        cout << sum << endl;
    }
}

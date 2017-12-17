#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    char c;
    cin >> n >> c;
    for (int i = 0; i*2 < n; ++i) {
        cout << string(i*2, ' ');
        for (int j = 1; j < 2*(n-2*i); ++j)
            cout << ((j%2)? c : '.');
        cout << endl;
    }
}

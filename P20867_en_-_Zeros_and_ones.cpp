#include <bits/stdc++.h>
using namespace std;

void print(const int& i, const int& depth) {
    if (depth == 1) {
        cout << i;
        return;
    }
    print(i/2, depth-1);
    cout << ' ' << i%2;
}

int main () {
    for (int n; cin >> n;)
        for (int i = 0; i < 1<<n; ++i) {
            print(i, n);
            cout << endl;
        }
}

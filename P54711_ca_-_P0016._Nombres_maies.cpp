#include <bits/stdc++.h>
using namespace std;

void print_maia(const int& n) {
    if (n < 20) {
        if (n == 0) cout << "zero" << endl;
        if (n%5) cout << string(n%5, '.') << endl;
        if (n >= 5) for (int i = 0; i < n/5; ++i) cout << "-----" << endl;
    } else {
        print_maia(n/20);
        print_maia(n%20);
    }
}

int main () {
    for (int n; cin >> n;) {
        cout << n << endl;
        print_maia(n);
    }
}

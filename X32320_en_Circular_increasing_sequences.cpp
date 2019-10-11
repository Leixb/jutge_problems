#include <bits/stdc++.h>
using namespace std;

bool is_circular_increasing() {
    int fst;
    if (cin >> fst) {

        int prev = fst;

        for (int n; cin >> n ; prev = n)
            if (n < prev) {
                for (prev = n; cin >> n; prev = n)
                    if (n < prev or n > fst) return false;
                return true;
            }

    }

    return true;
}

int main () {
    cout << (is_circular_increasing()? "yes" : "no") << endl;
}

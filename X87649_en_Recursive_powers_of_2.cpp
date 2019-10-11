#include <bits/stdc++.h>
using namespace std;

int two_to_n(const int& n) {
    return n? 2*two_to_n(n-1) : 1;
}

int main () {
    for (int n; cin >> n;) cout << two_to_n(n) << endl;
}

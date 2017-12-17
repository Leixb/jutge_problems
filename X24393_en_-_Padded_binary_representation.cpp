#include <bits/stdc++.h>
using namespace std;

// n >= 0, the representation of n in binary needs at
// most k bits, i.e., n < 2^k
void write_binary(int n, int k) {
    if (k) {
        write_binary(n/2, k-1);
        cout << n%2;
    }
}

int main () {
    for (int n, k; cin >> n >> k;) {
        write_binary(n, k);
        cout << endl;
    }
}

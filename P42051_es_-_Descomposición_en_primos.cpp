#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int k; n-- and cin >> k;) {
        cout << k << '=';
        bool f = true;
        for (int i = 2; i*i <= k; i += 2) {
            if (i == 4) --i;
            if (k % i == 0) {
                k/=i;
                int pot = 1;
                while (k%i == 0) k /= i, ++pot;

                if (!f) cout << '*';
                cout << i;
                if (pot > 1) cout << '^' << pot;
                f = false;
            }
        }
        if (k > 1) {
            if (!f) cout << '*';
            cout << k;
        }
        cout << endl;
    }
}

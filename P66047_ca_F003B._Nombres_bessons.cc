#include <bits/stdc++.h>
using namespace std;

bool son_bessons(int a, int b) {
    vector <int> seen(10, 0);

    for (;a > 0; a/=10) ++seen[a%10];
    for (;b > 0; b/=10) --seen[b%10];

    for (const auto& p : seen) if (p) return false;

    return true;
}

int main () {
    for (string cas; cin >> cas;) {
        cout << "Cas " << cas << ": ";
        int total = 0;

        int n;
        cin >> n;
        vector <int> conjunt(n);
        for (int i = 0; i < n; ++i) cin >> conjunt[i];

        for (int i = 0; i < n; ++i) {
            if (conjunt[i]) {
                bool trobat = false;
                for (int j = i+1; j < n; ++j) {
                    if (conjunt[j] and son_bessons(conjunt[i], conjunt[j])) {
                        conjunt[j] = 0;
                        trobat = true;
                    }
                }
                if (trobat) {
                    conjunt[i]=0;
                } else ++total;
            }
        }

        for (int i = 0; i < n; ++i) if (conjunt[i]) cout << conjunt[i] << ' ';

        cout << "(total " << total << ')' << endl;
    }
}

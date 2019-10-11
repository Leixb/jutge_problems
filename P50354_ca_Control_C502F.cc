#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <string> noms (n);
        for (int i = 0; i < n; ++i) cin >> noms[i];
        int m;
        cin >> m;
        while (m--) {
            string prefix;
            cin >> prefix;
            cout << "Comencen amb " << prefix << ':' << endl;
            for (int i = 0; i < n; ++i)
                if (noms[i].size() >= prefix.size()) {
                    bool ok = true;
                    for (size_t j = 0; j < prefix.size(); ++j)
                        if (noms[i][j] != prefix[j]) ok = false;
                    if (ok) cout << noms[i] << endl;
                }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n,k; cin >> n >> k;) {
        vector<int> files (n, -1), columnes(n, -1);
        vector<bool> amenacat(k, false);

        int cont = 0;

        while (k--) {
            int i, j;
            cin >> i >> j;

            if (files[i] != -1 or columnes[j] != -1) {
                ++cont;
                amenacat[k] = true;
            }

            if (files[i] != -1 and !amenacat[files[i]]) ++cont, amenacat[files[i]]=true;
            if (columnes[j] != -1 and !amenacat[columnes[j]]) ++cont, amenacat[columnes[j]]=true;

            files[i] = columnes[j] = k;
        }

        cout << cont << endl;
    }
}

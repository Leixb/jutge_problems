#include <bits/stdc++.h>
using namespace std;

int main () {
    const vector<int> monedes{ 200, 100, 50, 20, 10, 5, 2, 1};

    for (int n, cont=1; cin >> n; ++cont) {
        vector<int> v(n);
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            sum += v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        bool ok = true;
        for (int i = 0, j = 0; i < n and ok; ++i) {
            while(monedes[j] > sum) ++j;

            if (monedes[j] != v[i]) ok = false;
            else sum -= v[i];

        }
        cout << "Canvi " << cont << (ok? ": es" : ": no es") << " minim" << endl;
    }
}

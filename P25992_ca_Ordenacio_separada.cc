#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    vector <int> senars, parells;
    while (cin >> n) {
        if (n==0) {
            sort(parells.begin(), parells.end());
            for (size_t i = 0; i < parells.size(); ++i) {
                if (i!=0) cout << ' ';
                cout << parells[i];
            }
            cout << endl;

            sort(senars.begin(), senars.end(), greater<int>());
            for (size_t i = 0; i < senars.size(); ++i) {
                if (i!=0) cout << ' ';
                cout << senars[i];
            }
            cout << endl;
            parells = senars = vector<int> (0);

        } else if (n%2) senars.push_back(n);
        else parells.push_back(n);
    }
}

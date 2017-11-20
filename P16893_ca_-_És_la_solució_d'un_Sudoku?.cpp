#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        vector<vector<short> > taulell(9, vector<short> (9));
        cin >> taulell;

        bool ok = true;
        for (int i=0; i < 9 and ok; ++i) {
            vector <bool> horizontal(10, false), vertical(10, false), quadrant(10, false);

            const int a = i%3, b = i/3;

            for (int j=0; j < 9 and ok; ++j)
                if (horizontal[taulell[i][j]] or vertical[taulell[j][i]] or quadrant[taulell[a*3+j/3][b*3+j%3]]) ok = false;
                else vertical[taulell[j][i]] = horizontal[taulell[i][j]] = quadrant[taulell[a*3+j/3][b*3+j%3]] = true;
        }

        cout << ((ok)? "si" : "no") << endl;
    }
}

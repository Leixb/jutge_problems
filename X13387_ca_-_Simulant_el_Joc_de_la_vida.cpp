#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, v;
    cin >> n >> v;

    vector<vector<bool> > m (n, vector<bool> (n, 0));

    int i, j;
    while (cin >> i >> j) m[i][j]=true;
    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < n; ++l)
            if(m[k][l]) cout << 'B';
            else cout << '.';
        cout << endl;
    }
    cout << endl;

    while (v--) {
        bool changed = false;
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < n; ++i) {

                int x = j, y = (j%2)? n-1-i : i;

                int tot=0;

                bool current = m[y][x];

                if (y > 0) {
                    tot += m[y-1][x];
                    if (x > 0) tot += m[y-1][x-1];
                    if (x < n-1) tot += m[y-1][x+1];
                }
                if (y < n-1) {
                    tot += m[y+1][x];
                    if (x > 0) tot += m[y+1][x-1];
                    if (x < n-1) tot += m[y+1][x+1];
                }
                if (x > 0) tot += m[y][x-1];
                if (x < n-1) tot += m[y][x+1];

                if (m[y][x]) m[y][x] = (tot >= 2);
                else m[y][x] = (tot==3);


                changed |= current^m[y][x];
            }
        }

        for (int k = 0; k < n; ++k) {
            for (int l = 0; l < n; ++l)
                if(m[k][l]) cout << 'B';
                else cout << '.';
            cout << endl;
        }
        cout << endl;
        if (!changed) break;
    }
}

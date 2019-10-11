#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

int main () {
    for (int n, m; cin >> n >> m and n and m;) {
        vector<vector<char> > taulell(n, vector<char> (m));
        vector<vector<bool> > t_next(n, vector<bool> (m));
        cin >> taulell;
        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < m; ++j) {
                int tot=0;
                if (i > 0) {
                    tot += taulell[i-1][j] == 'X';
                    if (j > 0) tot += taulell[i-1][j-1] == 'X';
                    if (j < m-1) tot += taulell[i-1][j+1] == 'X';
                }
                if (i < n-1) {
                    tot += taulell[i+1][j] == 'X';
                    if (j > 0) tot += taulell[i+1][j-1] == 'X';
                    if (j < m-1) tot += taulell[i+1][j+1] == 'X';
                }
                if (j > 0) tot += taulell[i][j-1] == 'X';
                if (j < m-1) tot += taulell[i][j+1] == 'X';
                if (taulell[i][j] == 'X') t_next[i][j]=(tot==2 or tot==3);
                else t_next[i][j]=(tot==3);
            }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j)
                if (t_next[i][j]) cout << 'X';
                else cout << '.';
            cout << endl;
        }
        cout << endl;
    }
}

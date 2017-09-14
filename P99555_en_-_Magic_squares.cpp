#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <vector <int> > v (n, vector<int> (n));
        vector <bool> chk (n*n,0);
        int all = 0;
        for (int i=0; i < v.size(); i++)
            for (int j=0; j < v[i].size(); j++) {
                cin >> v[i][j];
                if (!chk[v[i][j]-1]) all++;
                chk[v[i][j]-1] = 1;
            }
        bool sq = 1;
        int d1 = 0, d2 = 0, sum = -1;
        if (all != n*n) sq = false;
        vector <int> col (n,0);
        for (int i=0; i < v.size() and sq; i++) {
            int tot = 0;
            for (int j=0; j < v[i].size(); j++) {
                col[j]+=v[i][j];
                tot += v[i][j];
                if (j+i == n-1) d1 += v[i][j];
                if (j-i == 0) d2 += v[i][j];
            }
            if (sum == -1) sum = tot;
            if (tot != sum) sq =0;
        }
        if (d1 != d2 or d1 != sum) sq = 0;
        for (int i = 0; i < col.size() and sq; i++) if (col[i] != sum) sq = 0;
        if (sq) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

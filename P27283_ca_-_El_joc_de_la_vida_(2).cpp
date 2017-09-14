#include <iostream>
#include <vector>
using namespace std;

bool equ(vector <vector <bool> > a, vector <vector <bool> > b) {
    for (size_t i = 0; i < a.size(); ++i)
        for (size_t j = 0; j < a[i].size(); ++j)
            if (a[i][j]!=b[i][j]) return false;
    return true;
}

int main () {
    size_t x,y;
    cin >> x >> y;
    vector <vector <bool> > m (x,vector <bool> (y,0));
    vector <vector <bool> > m2 = m;
    vector <vector <vector <bool> > > cic;
    for (size_t i = 0; i < x; ++i)
        for (size_t j = 0; j < y; ++j) {
            char b;
            cin >> b;
            if (b=='B') m[i][j]=true;
        }
    cic.push_back(m);
    while (1) {
        m=cic[cic.size()-1];
        for (size_t i = 0; i < x; ++i) 
            for (size_t j = 0; j < y; ++j) {
                int tot=0;
                if (i > 0) {
                    tot += m[i-1][j];
                    if (j > 0) tot += m[i-1][j-1];
                    if (j < y-1) tot += m[i-1][j+1];
                }
                if (i < x-1) {
                    tot += m[i+1][j];
                    if (j > 0) tot += m[i+1][j-1];
                    if (j < y-1) tot += m[i+1][j+1];
                }
                if (j > 0) tot += m[i][j-1];
                if (j < y-1) tot += m[i][j+1];
                if (m[i][j]) m2[i][j]=(tot==2 or tot==3);
                else m2[i][j]=(tot==3);
            }
        int st = max(0,int(cic.size()-100));
        for (size_t i = st; i < cic.size(); ++i) {
            if (equ(m2,cic[i])) {
                for (size_t j = i; j < cic.size(); ++j) {
                    if (j!=i) cout << endl;
                    for (size_t k = 0; k < cic[j].size(); ++k) {
                        for (size_t l = 0; l < cic[j][k].size(); ++l)
                            if(cic[j][k][l]) cout << 'B';
                            else cout << '.';
                        cout << endl;
                    }
                }
                return 0;
            }
        }
        cic.push_back(m2);
    }
}

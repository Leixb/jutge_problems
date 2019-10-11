#include <iostream>
#include <vector>
using namespace std;

int main () {
    size_t x,y;
    bool first=true;
    while (cin >> x >> y and x!=0 and y!=0) {
        if (!first) cout << endl;
        else first=false;
        vector <vector <bool> > m (x,vector <bool> (y,0));
        vector <vector <bool> > m2 = m;
        for (size_t i = 0; i < x; ++i)
            for (size_t j = 0; j < y; ++j) {
                char b;
                cin >> b;
                if (b=='B') m[i][j]=true;
            }
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
        for (size_t i = 0; i < x; ++i) {
            for (size_t j = 0; j < y; ++j)
                if (m2[i][j]) cout << 'B';
                else cout << '.';
            cout << endl;
        }
    }
}

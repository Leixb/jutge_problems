#include <iostream>
#include <vector>
using namespace std;

#define INF 1e7

int W,L;
vector <vector<char> > v;
vector <vector <int> > di;

int back(int p,int d = 0) {
    int c=0;
    if (p<0 or p>=W) return INF;
    if (di[d][p]!=-1) return di[d][p];
    if (v[d][p]=='T') c=3;
    if (v[d][p]=='*') di[d][p]=INF;
    else di[d][p] = c+min(min(back(p-1,d+1)+1,back(p,d+1)),back(p+1,d+1)+1);
    return di[d][p];
}

int main () {
    cin >> W >> L;
    v.resize(L,vector <char> (W));
    di.resize(L,vector <int> (W,-1));
    int p = 0; 
    for (int i=0; i < L; i++) 
        for (int j=0; j < W; j++) {
            cin >> v[i][j];
            if (v[i][j]=='M') p = j;
        }
    for (int i = 0; i < W; i++) {
        if (v[L-1][i]=='.') di[L-1][i]=0;
        else if (v[L-1][i] == '*') di[L-1][i]=INF;
        else di[L-1][i]=3;
    }
    int r = back(p);
    if (r>=INF) cout << "IMPOSSIBLE" << endl;
    else cout << r << endl;
}

#include <bits/stdc++.h>
using namespace std;

#define coord pair <int,int>

vector <vector <char> > v;

void match(const coord& pos, const coord& des, const coord& orig={0,0}, bool first=true) {
    if (size_t(pos.first) >= v.size() or size_t(pos.second) >= v[0].size()) return;
    if (!first and v[pos.first][pos.second] == 'X')
        printf("(%d,%d)<->(%d,%d)\n", orig.first+1, orig.second+1, pos.first+1, pos.second+1);
    else match({pos.first+des.first, pos.second + des.second},des, ((first)? pos : orig) ,false);
}


int main () {
    int n,m;
    cin >> n >> m;
    v = vector <vector <char> > (n, vector <char> (m));
    for (int i=0; i < n; ++i)
        for (int j=0; j < m; ++j) cin >> v[i][j];
    for (int i=0; i < n; ++i)
        for (int j=0; j < m; ++j) if (v[i][j]=='X'){
            match({i,j},{1,1});
            match({i,j},{-1,1});
            match({i,j},{1,-1});
            match({i,j},{-1,-1});
        }

}

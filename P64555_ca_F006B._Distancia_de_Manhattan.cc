#include <bits/stdc++.h>
using namespace std;

template <typename T>
T abs (T n) { return (n < 0)? -n : n; }

template <typename T>
T dist (T x, T y, T X, T Y) { return abs(X-x) + abs(Y-y); }

int main () {
    int n,x,y;
    cin >> x >> y >> n;
    map <int, set <pair <int, int> > >  m;
    while (n--) {
        int X,Y;
        cin >> X >> Y;
        m[dist(x,y,X,Y)].insert({X,Y});
    }
    for (auto distancia : m) {
        cout << "punts a distancia " << distancia.first << endl;
        for (auto punt : distancia.second) cout << punt.first << ' ' << punt.second << endl;
    }
}

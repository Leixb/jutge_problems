#include <bits/stdc++.h>
using namespace std;


struct Dir {

    int x, y;

};

bool bfs (vector<string>& graella, int x, int y) {
    const int f = graella.size(), c = graella[0].size();

    Dir dir = {0, 1};

    if (x > 0 and graella[x-1][y] != '.') dir = {1, 0};
    else if (x + 1 < f and graella[x+1][y] != '.') dir = {1, 0};

    while (x > 0 and y > 0 and graella[x-dir.x][y-dir.x] != '.') x -= dir.x, y -= dir.y;

    bool enfonsat = true;

    for (int d = 1; x + d*dir.x < f and y + d*dir.y < c and graella[x + d*dir.x][y + d*dir.y] != '.'; ++d)
        if (graella[x + d*dir.x][y + d*dir.y] == 'V') enfonsat = false;

    if (enfonsat) 
        for (int d = 1; x + d*dir.x < f and y + d*dir.y < c and graella[x + d*dir.x][y + d*dir.y] != '.'; ++d)
            graella[x + d*dir.x][y + d*dir.y] = '.';

    return enfonsat;
}

int main () {
    int f, c;
    cin >> f >> c;

    vector<string> graella(f, string (c, '.'));
    for (int i=0; i < f; ++i)
        for (int j=0; j < c; ++j) cin >> graella[i][j];

    char x;
    int y;
    while (cin >> x >> y) {
        cout << x << y << ": ";
        x -= 'a';
        if (graella[x][y] != '.') {
            graella[x][y] = 'T';
            cout << (bfs(graella, x, y)? "enfonsat" : "tocat") << endl;
        } else cout << "aigua" << endl;
    }

    cout << endl;
    for (int i=0; i < f; ++i)
        cout << graella[i] << endl;
}

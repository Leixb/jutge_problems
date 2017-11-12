#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

template <typename T>
using Cube = vector <vector <vector<T> > >;

struct dir {
    int x, y, z;
    dir(int x=0, int y=0, int z=0): x(x), y(y), z(z) {}
};

void computa(const Cube<int>& cub, const dir& mov, vector<int>& ratlles) {
    int n = cub.size();
    map <pair<int, pair<int, int> >, bool> M;
    for (const auto& mov_dir : {&mov.x, &mov.y, &mov.z}) {
        if (*mov_dir == 0) continue;
        int i=0, j=0, k = (*mov_dir==-1)*(n-1);

        int *x, *y, *z;
        if (mov_dir == &mov.x) x = &k, y = &i, z = &j;
        if (mov_dir == &mov.y) x = &i, y = &k, z = &j;
        if (mov_dir == &mov.z) x = &i, y = &j, z = &k;

        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j) {
                if (M[{*x, {*y, *z}}]) continue;
                M[{*x, {*y, *z}}] = true;
                int prev = cub[*x][*y][*z], ln = 1;
                int X = *x+mov.x, Y = *y+mov.y, Z = *z+mov.z;
                while (X >= 0 and Y >= 0 and Z >= 0 and X < n and Y < n and Z < n) {
                    if (cub[X][Y][Z] == prev) {
                        ++ln;
                        for (int i = 2; i <= ln; ++i) ++ratlles[i];
                    } else prev = cub[X][Y][Z], ln = 1;
                    X += mov.x, Y += mov.y, Z += mov.z;
                }
            }
    }
}

int main () {
    const vector <dir> moviments = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1},
        {0, 1, -1}, {1, 0, -1}, {1, -1, 0},
        {0, 1, 1}, {1, 0, 1}, {1, 1, 0},
        {-1, 1, 1}, {1, -1, 1}, {1, 1, -1}, {1, 1, 1} };

    bool f = true;

    int n;
    while (cin >> n) {
        if (f) f = false;
        else cout << endl;

        vector <int> ratlles (n+1, 0);
        Cube<int> cub (n, vector <vector <int> > (n, vector <int> (n)));
        cin >> cub;

        for (const auto& mov : moviments) computa(cub, mov, ratlles);

        for (int m = 2; m <= n; ++m) cout << "Ratlles de mida " << m << ": " << ratlles[m] << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    int f, c;
    while (cin >> f >> c) {
        vector <string> v(f);
        for (int i = 0; i < f; ++i) cin >> v[i];
        int y, x, sum = 0;
        string commandes;
        cin >> y >> x >> commandes;
        for (size_t i = 0; i < commandes.size(); ++i) {
            if (commandes[i] == 'N') --y;
            else if (commandes[i] == 'S') ++y;
            else if (commandes[i] == 'E') ++x;
            else --x;
            if (y < 0 or x < 0 or y >= f or x >= c or v[y][x]=='B') break;
            if (v[y][x]!='.') sum += v[y][x]-'0';
            v[y][x]='.';
        }
        cout << sum << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

typedef vector< vector<char> > Tauler;

void print_graella(const vector<vector<char> >& graella) {
    cout << "  12345678910" << endl;
    for (int i=0; i < 10; ++i) {
        cout << char('a'+i) << ' '; 
        for (int j = 0; j < 10; ++j) cout << graella[i][j];
        cout << endl;
    }
    cout << endl;
}

int main () {
    Tauler graella(10, vector<char> (10, '.'));
    vector <vector<bool> > done(10, vector<bool> (10, false));
    for (int i=0; i < 10; ++i) {
        int y, mida, dx, dy;
        char x, dir;
        cin >> x >> y >> mida >> dir;
        x -= 'a', --y;

        if (dir == 'v') dx = 1, dy = 0;
        else dx = 0, dy = 1;

        while (mida--) graella[x+dx*mida][y+dy*mida] = '+';
    }

    print_graella(graella);

    set <pair<char, int> > repetit;
    for (char x; cin >> x;) {
        x -= 'a'; 
        int y;
        cin >> y;
        --y;
        if (done[x][y]) repetit.insert({x + 'a', y+1});
        done[x][y]=true;
        if (graella[x][y] == '+') {
            graella[x][y] = '*';
            cout << "tocat!" << endl;
        } else if (graella[x][y] == '*') {
            cout << "tocat de nou!" << endl;
        } else cout << "aigua!" << endl;
    }

    cout << endl;
    print_graella(graella);

    for (const auto& i : repetit) cout << '(' << i.first << ',' << i.second << ')' << endl;
    cout << endl;
}

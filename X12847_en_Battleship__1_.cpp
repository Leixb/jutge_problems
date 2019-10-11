#include <bits/stdc++.h>
using namespace std;

typedef vector< vector<bool> > Board;

bool read_coord(int &x, int &y) {
    char _y;
    if (cin >> _y >> x) {
        y = _y - 'a';
        --x;
        return true;
    }
    return false;
}

void read_input(Board &battleground) {
    battleground = Board(10, vector<bool> (10, false));
    //llegim 10 linies

    for (int i = 0; i < 10; ++i) { 
        int x, y;
        read_coord(x, y);

        int mida;
        char direccio;
        cin >> mida >> direccio;

        if (direccio == 'h') {
            for (int j = x; j < x + mida; ++j) battleground[y][j] = true;
        } else {
            for (int j = y; j < y + mida; ++j) battleground[j][x] = true;
        }
    }
}

void print_coord(const int& x, const int &y) {
    cout << char(y+'a') << x+1;
}

void print_battleground(const Board& battleground) {
    cout << "  12345678910" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << char('a' + i) << ' ';
        for (int j = 0; j < 10; ++j)
            if (battleground[i][j]) cout << 'X';
            else cout << '.';
        cout << endl;
    }
    cout << endl;
}

int closest(const Board& battleground, const int& x, const int &y) {
    for (int dist = 1; dist < 10; ++dist) {
        for (int i = max(x-dist, 0); i < 10 and i <= x+dist; ++i) {
            if (y - dist >= 0 and battleground[y - dist][i]) return dist;
            if (y + dist < 10 and battleground[y + dist][i]) return dist;
        }
        for (int i = max(y-dist, 0); i < 10 and i <= y+dist; ++i) {
            if (x - dist >= 0 and battleground[i][x - dist]) return dist;
            if (x + dist < 10 and battleground[i][x + dist]) return dist;
        }
    }
    return 10;
}

int main () {
    Board battleground;

    read_input(battleground);

    print_battleground(battleground);

    int x, y; // coordenades del dispar
    while (read_coord(x, y)) {
        print_coord(x, y);
        if (battleground[y][x]) cout << " touched!" << endl;
        else cout << " water! closest ship at distance " << closest(battleground, x, y) << endl;
    }
}

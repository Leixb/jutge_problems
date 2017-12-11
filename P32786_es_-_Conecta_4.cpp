#include <bits/stdc++.h>
using namespace std;

const int COLUMNS=8, ROWS=6;

enum Player { RED='0', YELLOW='1', BLANK=' ' };
typedef vector<vector<Player> > Board;

struct Coord {
    int x, y;
};

vector <Coord> DIRECTIONS = {
    {0, 1},
    {1, 0},
    {1, 1},
    {1, -1},
};

void print(const Board& board) {
    for (const auto& row : board) {
        cout << '|';
        for (const auto& fitxa: row) cout << (char)fitxa;
        cout << '|' << endl;
    }
    cout << "\\--------/" << endl;
}

inline int get_row(const Board& board, const int& column) {
    int row;
    for (row=0; row < ROWS and board[row][column] == BLANK; ++row);
    return row-1;
}

inline bool is_full(const Board& board) {
    for (int column = 0; column < COLUMNS; ++column)
        if (board[0][column] == BLANK) return false;
    return true;
}

bool is_valid(const Coord& coord) {
    return coord.x >= 0 and coord.y >= 0
        and coord.x < ROWS and coord.y < COLUMNS;
}

bool check_dir(const Board& board, const Player& player, const Coord& direction, const int& row, const int& column) {
    Coord p = {row, column};
    while (is_valid(p) and board[p.x][p.y] == player)
        p.x -= direction.x, p.y -= direction.y;
    int cont;
    p.x += direction.x, p.y += direction.y;
    for (cont = 0; is_valid(p) and board[p.x][p.y] == player; ++cont)
        p.x += direction.x, p.y += direction.y;

    return cont >= 4;
}

bool connected(const Board& board, const int& row, const int& column) {
    Player player = board[row][column];
    for (const auto& direction : DIRECTIONS)
        if (check_dir(board, player, direction, row, column)) return true;
    return false;
}

int main () {
    Board board (ROWS, vector <Player> (COLUMNS, BLANK));

    Player player = RED;

    for (string movements; getline(cin, movements);) {
        if (movements == "") print(board);
        else {
            istringstream ss (movements);
            for (int column; ss >> column;) {
                --column;

                int row = get_row(board, column);

                if (row == -1) cout << "INVALID" << endl;
                else {
                    board[row][column] = player;
                    if (player == RED) player = YELLOW;
                    else player = RED;

                    if (connected(board, row, column)) {
                        cout << "CONNECT4" << endl;
                        print(board);
                        return 0;
                    }
                    else if (row == 0 and is_full(board)) {
                        cout << "FULL" << endl;
                        print(board);
                        return 0;
                    }
                }
            }
        }
    }
    cout << "QUIT" << endl;
}

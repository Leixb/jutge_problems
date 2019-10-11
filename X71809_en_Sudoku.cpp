#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Sudoku;

inline void read_sudoku(Sudoku& S) {
    for (int i=0; i < 9; ++i)
        for (int j=0; j < 9; ++j) cin >> S[i][j];
}

enum dir {HORIZ, VERTI};

bool check(const Sudoku& S, const dir& d, int& p) {
    vector<bool> done (9, false);
    int i;
    int *x = &p, *y = &p;

    if (d == HORIZ) x = &i;
    else y = &i;

    for (i = 0; i < 9; ++i) {
        if (done[S[*x][*y]]) return false;
        done[S[*x][*y]] = true;
    }
    return true;
}

bool check_col(const Sudoku& S, int& col) {
    return check(S, VERTI, col);
}

bool check_row(const Sudoku& S, int& row) {
    return check(S, HORIZ, row);
}

bool check_sq(const Sudoku& S, int& sq) {
    vector<bool> done (9, false);

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            const int x = 3*(sq%3) + i, y = 3*(sq/3) + j;

            if (done[S[x][y]]) return false;
            done[S[x][y]] = true;

        }

    return true;
}

bool check_sudoku(const Sudoku& S) {
    for (int i = 0; i < 9; ++i) {
        if (!check_col(S, i)
         or !check_row(S, i)
         or !check_sq(S, i)) return false;
    }
    return true;
}



int main () {
    int n;
    cin >> n;

    Sudoku S (9, vector<int> (9));

    while (n--) {
        read_sudoku(S);

        cout << (check_sudoku(S)? "yes" : "no") << endl;
    }
}

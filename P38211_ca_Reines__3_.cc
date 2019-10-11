#include <cstdio>
using namespace std;

int N, *BOARD;

struct cache {
    bool *sum, *diff, *x;
    cache(const int& n) {
        sum = new bool[2*n]();
        diff = new bool[2*n]();
        x = new bool[n]();
    }
};

inline bool placementOK(const cache& vists, const int& f, const int& c) {
    if (vists.x[c] or vists.sum[f+c] or vists.diff[f-c+N]) return false;
    return true;
}

bool nQueens(cache& vists,  const int& f) {
    if (f == N) return true;

    for (int col = 0; col < N; ++col)
        if (placementOK(vists, f, col)) {
            vists.x[col] =
            vists.sum[f+col] =
            vists.diff[f-col+N] = true;
            if (nQueens(vists, f+1)) {
                BOARD[f] = col;
                return true;
            }
            vists.x[col] =
            vists.sum[f+col] =
            vists.diff[f-col+N] = false;
        }

    return false;
}

int main () {
    scanf("%i", &N);
    BOARD = new int[N];

    cache vists(N);

    if (nQueens(vists, 0)) {

        for (int i=0; i < N; ++i) {
            const int sz = BOARD[i];
            for (int j = 0; j < sz; ++j) putchar('.');
            putchar('Q');
            for (int j = sz+1; j < N; ++j) putchar('.');
            putchar('\n');
        }

    } else printf("NO SOLUTION\n");
}

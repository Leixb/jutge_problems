#include <iostream>
#include <vector>
using namespace std;

struct Casella {
  char tipus;  // 'X':wall, 'E':exit, '.':empty
  int energia;  // amount of energy drained in this position.
};

typedef vector<vector<Casella> > Laberint;

const char WALL='X';
const char FREE='.';
const char EXIT='E';

Laberint llegir_taula() {
   int n, m;
   cin >> n >> m;
   Laberint l (n, vector<Casella>(m));
   for (int i = 0; i < n ; ++i) {
      for (int j= 0;  j < m; ++j) {
         char t;
         cin >> t;
         if ('0'<=t and t<='9') {
            l[i][j].tipus = FREE;
            l[i][j].energia = int(t) - int('0');
         }
         else {
            l[i][j].tipus = t;
            l[i][j].energia = 0;
         }
      }
   }
   return l;
}

struct Dir {
    int x, y;
};

bool sortir(const Laberint& lab, int e, int x, int y, const Dir& dir) {
    while (e > 0) {
        e -= lab[x][y].energia;

        x += dir.x, y += dir.y;
        if (x < 0 or y < 0 or x >= lab.size() or y >= lab[0].size()) return false;

        if (lab[x][y].tipus == WALL) return false;
        if (lab[x][y].tipus == EXIT) return true;
    }
    return false;
}

int main() {
   // load labyrinth
   Laberint lab=llegir_taula(); 

   int x,y;  //posicio inicial
   int e; // energia incial
   while (cin>>x>>y>>e) {
       // for each starting position and energy
       // check for exit direction and print result.
       if (sortir(lab, e, x, y, {0, 1})) cout << "right" << endl;
       else if (sortir(lab, e, x, y, {0, -1})) cout << "left" << endl;
       else if (sortir(lab, e, x, y, {1, 0})) cout << "down" << endl;
       else if (sortir(lab, e, x, y, {-1, 0})) cout << "up" << endl;
       else cout << "no" << endl;
   }
}

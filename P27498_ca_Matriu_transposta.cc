#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void transposa(Matriu& m) {
    for (int i = 1; i < m.size(); i++) {
        for(int j = 0; j < i; j++) {
            swap(m[i][j],m[j][i]);
        }
    }
}

int main () {
    Matriu c (5, vector <int> (5));
    for (int i = 0; i < 5; i++) for (int j = 0; j < 5; j++) cin >> c[i][j];
    transposa(c);
    cout << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) cout << c[i][j] << '\t';
        cout << endl;
    }
}
/*
0 1 
0 2 1 2 
0 3 1 3 2 3
0 4 1 4 2 4 3 4
*/
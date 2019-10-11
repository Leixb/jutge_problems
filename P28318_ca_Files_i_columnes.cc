#include <iostream>
#include <vector>
using namespace std;

int main () {
    int ii,jj;
    cin >> ii >> jj;
    vector <vector <int> > v (ii, vector <int> (jj));
    for (int i = 0; i < ii; i++) {
        for (int j = 0; j < jj; j++) cin >> v[i][j];
    }
    string s;
    while (cin >> s) {
        if (s=="fila") {
            int i;
            cin >> i;
            cout << s << ' ' << i << ':';
            i--;
            for (int j = 0; j < jj; j++) cout << ' ' << v[i][j];
            cout << endl;
        } else if (s=="columna") {
            int j;
            cin >> j;
            cout << s << ' ' << j << ':';
            j--;
            for (int i = 0; i < ii; i++) cout << ' ' << v[i][j];
            cout << endl;
        } else {
            int i,j;
            cin >> i >> j;
            cout << "element " << i << ' ' << j << ": " << v[i-1][j-1] << endl;
        }
    }
}

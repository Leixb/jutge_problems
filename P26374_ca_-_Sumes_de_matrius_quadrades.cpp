#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu suma(const Matriu& a, const Matriu& b) {
    Matriu c (a.size(), vector <int> (a.size()));
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) c[i][j]=a[i][j]+b[i][j];
    }
    return c;
}

int main () {
	
}

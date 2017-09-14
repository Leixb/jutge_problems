#include <iostream>
using namespace std;

void func(int n) {
    int m,nn=n;
    bool t = true;
    while (cin >> m) {
        if (m==-1) break;
        if (--n==0 and m!=-1) {
            t = false;
            cout << "A la posicio " << nn << " hi ha un " << m << '.' << endl;
        }
    }
    if (t) cout << "Posicio incorrecta." << endl;
}

int main () {
	int n;
    while (cin >> n) func(n);
}

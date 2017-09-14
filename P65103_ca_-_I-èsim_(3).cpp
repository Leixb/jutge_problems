#include <iostream>
using namespace std;

int main () {
	int n;
    int p;
    bool t = false;
    cin >> p;
    int pp = p;
    while (cin >> n) {
        if (--p==0) {
            cout << "A la posicio " << pp << " hi ha un " << n << '.' << endl;
            t = true;
            break;
        }
    }
    if (!t) cout << "Posicio incorrecta." << endl;
}

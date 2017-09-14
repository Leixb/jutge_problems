#include <iostream>
using namespace std;

int main () {
    long long n = 0;
    long long p,pp;
    cin >> p;
    pp = p;
    while (cin >> n) {
        if (n==-1) break;
        if (--p==0) {
            cout <<"A la posicio " << pp << " hi ha un " << n << '.' << endl;
            break;
        }
    }
    if (p!=0 or pp == p) cout << "Posicio incorrecta." << endl;
}

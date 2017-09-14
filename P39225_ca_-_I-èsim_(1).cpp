#include <iostream>
using namespace std;

int main () {
    long long n;
    long long p,pp;
    cin >> p;
    pp = p;
    while (cin >> n) {
        if (--p==0) {
            cout <<"A la posicio " << pp << " hi ha un " << n << '.' << endl;
            break;
        }
    }
}

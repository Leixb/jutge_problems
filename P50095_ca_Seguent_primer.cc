#include <iostream>
#include <math.h>
using namespace std;

bool primer (const int& n) {
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) if (n%i==0) return false;
    return true;
}

int main () {
    for (int p, j; cin >> p and primer(p);) {
        if (p <= 2) p -= 1;
        for (j = p+2; !primer(j); j+=2);
        cout << j << endl;
    }
}

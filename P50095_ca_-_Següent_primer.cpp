#include <iostream>
#include <math.h>
using namespace std;

bool primer (int n) {
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) if (n%i==0) return false;
    return true;
}

int main () {
    int p;
    while (cin >> p) {
        if (!primer(p)) break;
        for (int j = p+1; 1; j+=2) {
            if (j%2==0) j++;
            if (primer(j)) {
                cout << j << endl;
                break;
            }
        }
    }
}

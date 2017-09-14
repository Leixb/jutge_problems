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
	int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (primer(p)) cout << p << " es primer" << endl;
        else cout << p << " no es primer" << endl;
    }
}

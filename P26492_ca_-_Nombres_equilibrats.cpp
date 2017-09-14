#include <iostream>
using namespace std;

bool es_equilibrat(int n) {
    int p = 0, s = 0;
    bool pp = 0;
    while (n >= 1) {
        pp ^= 1;
        if (pp) p += n%10;
        else s += n%10;
        n /= 10;
    }
    return (s==p);
}

int main () {
	int n;
    while (cin >> n) cout << es_equilibrat(n) << endl;
}

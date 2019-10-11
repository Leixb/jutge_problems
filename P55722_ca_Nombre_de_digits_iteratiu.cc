#include <iostream>
using namespace std;

int nombre_digits(int n) {
    int c = 0;
    while (n >= 10) {
        n /= 10;
        c++;
    }
    return c+1;
}

int main () {
	int n;
    while (cin >> n) cout << nombre_digits(n) << endl;
}

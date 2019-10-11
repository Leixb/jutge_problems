#include <iostream>
using namespace std;

int factorial_doble(int n) {
    int res = 1;
    for (int i = n; i > 1; i -= 2) res *= i;
    return res;
}

int main () {
	int n;
    while (cin >> n) cout << factorial_doble(n) << endl;
}

#include <iostream>
using namespace std;

int factorial (int n) {
    int res = 1;
    for (int i  = 1; i <= n; i++) res *= i;
    return res;
}

int main () {
	int n;
    while (cin >> n) cout << factorial(n) << endl;
}

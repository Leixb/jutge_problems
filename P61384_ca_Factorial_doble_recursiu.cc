#include <iostream>
using namespace std;

 int factorial_doble(int n) {
    if (n <= 1) return 1;
    if (n == 2) return 2;
    return n*factorial_doble(n-2);
 }

int main () {
	int n;
    while (cin >> n) cout << factorial_doble(n) << endl;
}

#include <iostream>
using namespace std;

 int factorial(int n) {
    if (n <= 1) return 1;
    if (n == 2) return 2;
    return n*factorial(n-1);
 }

int main () {
	int n;
    while (cin >> n) cout << factorial(n) << endl;
}

#include <iostream>
using namespace std;

int nombre_digits(int n) {
    if (n < 10) return 1;
    return 1+nombre_digits(n/10);
}

int main () {
    int n;
    while (cin >> n) cout << nombre_digits(n) << endl;
}

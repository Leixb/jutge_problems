#include <iostream>
using namespace std;

int sum_products(int n) {
    if (n <= 2) return 0;
    return n*(n-1)*(n-2) + sum_products(n-1);
}

int main() {
    int n;
    while (cin >> n)
        cout << sum_products(n) << endl;
}

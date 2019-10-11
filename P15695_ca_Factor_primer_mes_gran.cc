#include <iostream>
using namespace std;

int factor_mes_gran(int n) {
    for (int i = 2; i*i <= n; ++i)
        if (n%i==0) {
            n /= i;
            --i;
        }
    return n;
}

int main () {
    int n;
    while (cin >> n) cout << factor_mes_gran(n) << endl;
}


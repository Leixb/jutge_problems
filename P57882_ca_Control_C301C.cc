#include <bits/stdc++.h>
using namespace std;

int suma_divisors(int n) {
    int s = 0;
    for (int i = 1; i < n; ++i) if(n%i==0) s+=i;
    return s;
}

int main () {
    int n;
    while (cin >> n) {
        int suma = suma_divisors(n-2) + suma_divisors(n) + suma_divisors(n+2);
        cerr << suma << endl;
        if (suma == n) cout << n << ": " << "popiropis" << endl;
        else if (suma%n==0) cout << n << ": " << suma/n << "-popiropis" << endl;
        else cout << n << ": res" << endl;
    }
}

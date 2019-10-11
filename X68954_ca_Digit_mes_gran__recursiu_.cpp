#include <bits/stdc++.h>
using namespace std;

int digit_mes_gran(const int& n) {
    if (n < 10) return n;
    const int d = n%10;
    if (d == 9) return 9;
    return max(d, digit_mes_gran(n/10));
}

int main () {
    for (int n; cin >> n;) cout << "Maximum digit of " << n << " is " << digit_mes_gran(n) << '.' << endl;
}

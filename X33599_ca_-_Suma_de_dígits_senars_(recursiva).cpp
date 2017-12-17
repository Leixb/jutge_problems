#include <bits/stdc++.h>
using namespace std;

int sum_odd_digits(int n) {
    if (n == 0) return 0;
    return (n%2? n%10 : 0) + sum_odd_digits(n/10);
}

int main () {
    for (int n; cin >> n;) cout << "The sum of odd digits of " << n << " is " << sum_odd_digits(n) <<  '.' << endl;
}

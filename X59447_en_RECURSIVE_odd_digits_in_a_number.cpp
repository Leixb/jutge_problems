#include <bits/stdc++.h>
using namespace std;

int number_of_odd_digits(const int& n) {
    if (n < 10) return n%2;
    return n%2 + number_of_odd_digits(n/10);
}

int main () {
    for (int n; cin >> n;) cout << number_of_odd_digits(n) << endl;
}

#include <bits/stdc++.h>
using namespace std;

/// return sum of digits
int sum_digits(int x) {
    int s = 0;
    while (x > 0) {
        s = s + x%10;
        x = x/10;
    }
    return s;
}

int main () {
    int mn, sum_mn;
    cin >> mn;
    sum_mn = sum_digits(mn);
    for (int n; cin >> n;) {
        const int sum = sum_digits(n);
        if (sum < sum_mn) mn = n, sum_mn = sum;
    }
    cout << mn << ' ' << sum_mn << endl;
}

#include <bits/stdc++.h>
using namespace std;

int your_function_name(const int& n) {
    int res = 0;
    for (int i = 2; i <= n; ++i) res += i*(i-1);
    return res;
}

int main () {
    for (int n; cin >> n;) cout << your_function_name(n) << endl;
}

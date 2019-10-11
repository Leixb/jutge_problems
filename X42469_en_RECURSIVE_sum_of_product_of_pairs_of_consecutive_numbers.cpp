#include <bits/stdc++.h>
using namespace std;

int your_function_name(const int& n) {
    if (n == 1) return 0;
    return n*(n-1) + your_function_name(n-1);
}

int main () {
    for (int n; cin >> n;) cout << your_function_name(n) << endl;
}

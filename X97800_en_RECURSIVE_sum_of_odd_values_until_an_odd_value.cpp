#include <bits/stdc++.h>
using namespace std;

int your_function_name(const int& n) {
    if (n == 1) return 1;
    return n + your_function_name(n-2);
}

int main() {
    for (int n; cin >> n;) cout << your_function_name(n) <<endl;
}

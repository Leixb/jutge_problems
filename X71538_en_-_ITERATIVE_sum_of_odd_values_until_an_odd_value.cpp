#include <bits/stdc++.h>
using namespace std;

int your_function_name(const int& n) {
    int res = 0;
    for (int i = 1; i <= n; i += 2) res += i;
    return res;
}

int main() {
    for (int n; cin >> n;) cout<< your_function_name(n) <<endl;
}


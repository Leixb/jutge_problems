#include <bits/stdc++.h>
using namespace std;

void escriu(int n) {
    stack <int> S;
    S.push(n);
    while (!S.empty()) {
        const int num = S.top();
        S.pop();
        cout << ' ' << num;
        if (num > 1)
            S.push(num - 1), S.push(num - 1);
    }
}

int main() {
    int n;
    while (cin >> n) {
        escriu(n);
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

bool es_primer(const int& n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n%2 == 0) return false;
    for (int i = 3; i < sqrt(n)+1; i+=2) if (n%i == 0) return false;
    return true;
}

int main() {
    int cnt=0, n;
    bool prev = false;
    while (cin >> n)
        if (es_primer(n)) {
            if (prev) ++cnt;
            else prev = true;
        } else prev = false;
    cout << "parells de nombres primers consecutius: " << cnt << endl;
}

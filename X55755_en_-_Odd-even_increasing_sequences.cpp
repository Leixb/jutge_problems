#include <bits/stdc++.h>
using namespace std;

bool is_odd_even_increasing() {
    int a, b;
    if (!(cin >> a >> b)) return true;
    bool odd = true;
    for (int n; cin >> n; odd ^= 1) {
        if (odd and n < a) return false;
        else if(!odd and n < b) return false;
        if (odd) a = n;
        else b = n;
    }
    return true;
}

int main () {
    cout << (is_odd_even_increasing()? "yes" : "no") << endl;
}

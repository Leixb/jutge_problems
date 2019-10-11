#include <bits/stdc++.h>
using namespace std;

bool is_sawtooth() {
    int a, b;
    if (!(cin >> a >> b)) return true;

    bool inc = a > b;

    for(;cin >> a; inc^=1, b = a)
        if (inc and a <= b) return false;
        else if (!inc and b <= a) return false;

    return true;
}

int main () {
    cout << (is_sawtooth()? "yes" : "no") << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    string pa, pb;
    cin >> pa >> pb;
    const size_t a = pa.length(), b = pb.length();


    int cont = 0;
    bool prev_a = false;
    for (string s; cin >> s;) {
        if (s.length() == b and prev_a) ++cont;
        prev_a = s.length() == a;
    }

    cout << cont << endl;
}

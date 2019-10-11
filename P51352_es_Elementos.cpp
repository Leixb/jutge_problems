#include <bits/stdc++.h>
using namespace std;

int main () {
    char A,B;
    cin >> A >> B;
    if (A == B) cout << '-' << endl;
    else if ( A == 'V' and B == 'A' ) cout << 1 << endl;
    else if ( A == 'A' and B == 'V' ) cout << 2 << endl;
    else if ( A < B ) cout << 1 << endl;
    else cout << 2 << endl;
}


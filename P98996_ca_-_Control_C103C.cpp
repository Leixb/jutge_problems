#include <bits/stdc++.h>
using namespace std;

int main () {
    char c;
    cin >> c;
    if (c >= 'a' and c <= 'z') cout << c << " -> " << c-'a'+1 << endl;
    else if (c >= 'A' and c <= 'Z') cout << c << " -> " << c-'A'+1 << endl;
    else cout << c << " -> no es una lletra" << endl;
}

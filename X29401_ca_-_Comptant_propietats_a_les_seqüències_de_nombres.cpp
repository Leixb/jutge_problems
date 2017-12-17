#include <bits/stdc++.h>
using namespace std;

inline bool es_3inc(const int& a, const int& b, const int& c) {
    return a/100 == a%10 and b/100 == b%10 and c/100 == c%10 and a%10 < b%10 and b%10 < c%10;
}

int main () {
    int cont = 0;
    for (int a, b, c; cin >> a >> b >> c;) cont += es_3inc(a, b, c);
    cout << "3-Increasing: " << cont << endl;
}

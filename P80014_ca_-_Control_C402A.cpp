#include <bits/stdc++.h>
using namespace std;

int posicions_iguals(string s1, string s2) {
    size_t cont = 0;
    for (size_t i = 0; i < s1.size() and i < s2.size(); ++i) cont += s1[i] == s2[i];
    return cont;
}

int main () {
    string s1, s2;
    while (cin >> s1 >> s2) cout << posicions_iguals(s1, s2) << endl;
}

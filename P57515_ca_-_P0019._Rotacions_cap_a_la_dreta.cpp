#include <bits/stdc++.h>
using namespace std;

int rotacio_dreta(int x, int k) {
    string s = to_string(x);
    k %= s.size();
    string a = "", b="";
    for (size_t i = 0; i < s.size(); ++i)
        if (i < s.size() - k) a+=s[i];
        else b+=s[i];
    return stoi(b+a);
}

int main () {
    int x,k;
    while (cin >> x >> k) cout << rotacio_dreta(x,k) << endl;
}

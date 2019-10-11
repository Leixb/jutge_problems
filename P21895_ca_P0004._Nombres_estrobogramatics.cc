#include <bits/stdc++.h>
using namespace std;

int senars = 0;

bool es_estrobogramatic(int n) {
    if (n==0) return true;
    string s = to_string(n);
    for (size_t i = 0; i < s.size()/2+1; ++i)
        if (s[i] == '9') {
            if (s[s.size()-i-1] != '6') return false;
        } else if (s[i] == '6') {
            if (s[s.size()-i-1] != '9') return false;
        } else if (s[i] == '8') {
            if (s[s.size()-i-1] != '8') return false;
        } else if (s[i] == '1') {
            if (s[s.size()-i-1] != '1') return false;
        } else if (s[i] == '0') {
            if (s[s.size()-i-1] != '0' or s.size()-i-1 == 0) return false;
        } else return false;
    if (n%2) ++senars;
    return true;
}

int main () {
    int n;
    while (cin >> n)
        cout << n << ((es_estrobogramatic(n))? " si " : " no ") << "es estrobogramatic" << endl;
    cout << endl << "estrobogramatics senars: " << senars << endl;
}

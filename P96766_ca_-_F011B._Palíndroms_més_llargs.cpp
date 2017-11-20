#include <bits/stdc++.h>
using namespace std;

bool es_palindrom(const string& s) {
    for (size_t i = 0; i < s.size()/2; i++)
        if (s[i] != s[s.size()-i-1]) return false;
    return true;
}

int main () {
    cout << "-----" << endl;
    for (int n; cin >> n and n; ) {
        vector <string> palindroms(0);
        size_t longitud_max = 0;
        while (n--) {
            string s;
            cin >> s;
            if (es_palindrom(s)) {
                if (s.size() > longitud_max) longitud_max = s.size(), palindroms = {s};
                else if (s.size() == longitud_max) palindroms.push_back(s);
            }
        }
        if (longitud_max)
            for (const auto& paraula : palindroms) cout << paraula << endl;
        else cout << "cap palindrom" << endl;
        cout << "-----" << endl;
    }
}

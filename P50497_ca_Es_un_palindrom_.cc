#include <iostream>
using namespace std;

bool es_palindrom(const string& s) {
    for (int i = 0; i < s.size()/2; i++) if (s[i]!=s[s.size()-i-1]) return false;
    return true;
}

int main () {
    string s;
    while (cin >> s) cout << es_palindrom(s) << endl;
}

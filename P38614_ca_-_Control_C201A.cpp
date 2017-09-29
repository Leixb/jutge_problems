#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    bool parell=0;
    for (size_t i = 0; i < s.size(); i+=2) parell^=(s[s.size()-1-i]&1);
    cout << s << ((parell)? " NO":"") << " ES TXATXI" << endl;
}

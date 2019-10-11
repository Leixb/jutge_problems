#include <bits/stdc++.h>
using namespace std;

int main () {
    map<string, set<string> > M;
    int n;
    cin >> n;
    while (n--) {
        string lang, name;
        cin >> name >> lang;
        M[lang].insert(name);
    }
    for (const auto& lang : M) {
        cout << lang.first << ':';
        for (const auto& name: lang.second) cout << ' ' << name;
        cout << '.' << endl;
    }
}

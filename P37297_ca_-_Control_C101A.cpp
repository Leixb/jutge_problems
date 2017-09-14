#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int sum = 0;
    for (size_t i = max(0,int(s.size())-3); i < s.size(); ++i) sum += s[i]-'0';
    cout << sum << endl;
}


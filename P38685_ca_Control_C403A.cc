#include <bits/stdc++.h>
using namespace std;

bool conte(string s, string p) { // KMP with mem

    if (s.size() < p.size()) return false;

    vector <int> F (p.size(),0);

    for(size_t i = 2; i < p.size(); i++) // Build Fail table
        for(int j = F[i-1]; ;j = F[j])
            if(p[j] == p[i - 1]) {
                F[i] = j + 1;
                break;
            } else if (j == 0) break; // F[i] = 0

    for(size_t i = 0, j = 0; j < s.size();)
        if(s[j] == p[i] and (++i, ++j)) {
            if(i == p.size()) return true;
        } else if(i > 0) i = F[i];
        else j++;

    return false;
}

int main () {
    string a, b;
    while (cin >> a >> b) if (conte(b, a)) cout << '+' << endl;
    else cout << '-' << endl;
}

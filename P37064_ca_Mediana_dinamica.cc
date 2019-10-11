#include <bits/stdc++.h>
using namespace std;

int main () {
    set <string> S;
    set<string>::iterator median = S.end();
    for (string s; cin >> s and s != "END";) {
        S.insert(s);

        if (S.size() == 1) median = S.begin();

        if (S.size()%2) {
            if (*median < s) ++median;
        } else if (*median > s) --median;

        cout << *median << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    map<string, int> m;
    for (string s; cin >> s;) {

        if (s[0] == 'm') {

            s.pop_back();

            if (m.empty()) {
                cout << "indefinite " << s << endl;
                continue;
            }

            auto paraula = m.begin();
            if (s[1] == 'a') paraula = --m.end();

            cout << s << ": " << paraula->first << ", " << paraula->second
                    << " time(s)" << endl;

        } else {

            string p;
            cin >> p;
            if (s[0] == 's') ++m[p];
            else if (s[0] == 'd') {
                if (--m[p] <= 0) m.erase(p);
            }

        }
    }
}

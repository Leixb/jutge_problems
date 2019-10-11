#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        vector <int> v (30,0);
        char c;
        while (cin >> c and c!='.') if (c >= 'A' and c <= 'Z') ++v[c-'A'];
        while (cin >> c and c!='.') if (c >= 'A' and c <= 'Z') --v[c-'A'];
        bool ok = true;
        for (size_t i = 0; i < v.size(); ++i)
            if (v[i]) {
                ok = false;
                break;
            }
        cout << ((ok)? "SI" : "NO") << endl;
    }
}

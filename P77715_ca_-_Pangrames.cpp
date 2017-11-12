#include <bits/stdc++.h>
using namespace std;

int main () {
    bitset <size_t('z' - 'a' + 1)> b;
    char c;
    while (cin >> c)
        if (c == '.') {
            cout << (b.all()? "SI" : "NO") << endl;
            b.reset();
        } else {
            if (c < 'a') c += 'a' - 'A';
            if (c >= 'a' and c <= 'z') b[c - 'a'] = true;
        }
}

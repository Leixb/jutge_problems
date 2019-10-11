#include <bits/stdc++.h>
using namespace std;

int main () {
    int b, a, f;
    while (cin >> b >> a >> f) {
        cout << string(f, ' ') << string(b+1, '_') << endl;
        for (int i = 0; i < f-1; ++i)
            cout << string(f-i-1,' ') << '/' << string(b, ' ') << '/' << string(i, ' ') << '|' << endl;
        cout << '/' << string(b, '_') << '/' << string(f-1, ' ') << '|' << endl;
        for (int i = 0; i < a-1; ++i) {
            cout << '|' << string(b, ' ') << '|';
            if (i >= a-f) cout << string(a-i-1, ' ') << '/';
            else cout << string(f-1, ' ') << '|';
            cout << endl;
        }
        cout << '|' << string(b, '_') << '|' << '/' << endl;
        cout << endl;
    }
}

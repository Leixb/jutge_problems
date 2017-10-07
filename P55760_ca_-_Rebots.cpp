#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for (size_t i = 0; i < v.size(); ++i) os << v[i];
    return os;
}

int main () {
    int n,p;
    while (cin >> n >> p) {
        vector <char> v (n, '.');
        int d,e,x;
        cin >> d;
        while (d-- and cin >> x) v[x-1] = '>';
        cin >> e;
        while (e-- and cin >> x) v[x-1] = '<';
        while (p--) {
            cout << v << endl;
            auto nxt = v;
            for (int i = 0; i < n; ++i)
                if (v[i] == '<') {
                    nxt[i] = '.';
                    if (i == 0 or v[i-1] == '>') nxt[i+1] = '>';
                    else nxt[i-1] = '<';
                } else if (v[i] == '>') {
                    nxt[i] = '.';
                    if (i == n-1 or v[i+1] == '<') nxt[i-1] = '<';
                    else nxt[i+1] = '>';
                }
            v = nxt;
        }
        cout << endl;
    }
}

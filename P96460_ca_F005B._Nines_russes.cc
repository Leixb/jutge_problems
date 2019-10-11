#include <bits/stdc++.h>
using namespace std;

template <typename T>
inline bool abs(const T& n) {
    return (n < 0)? -n : n;
}

struct Rectangle {
    int est, oest, nord, sud;

    bool operator< (const Rectangle& r);
};

bool esta_inclos(const Rectangle& a, const Rectangle& b);

bool Rectangle::operator< (const Rectangle& r) {
    return oest < r.oest;
}

bool esta_inclos(const Rectangle& a, const Rectangle& b) {
    return (a.est < b.est) and (a.oest > b.oest) and (a.nord < b.nord) and (a.sud > b.sud);
}

int main () {
    bool first = true;
    for (int n; cin >> n; first = false) {
        vector <Rectangle> v (n);
        for (auto& rect : v) cin >> rect.est >> rect.oest >> rect.nord >> rect.sud;

        sort(v.begin(), v.end());

        bool ok = true;
        for (int i = 1; i < v.size(); ++i)
            if (!esta_inclos(v[i], v[i-1])) {
                ok = false;
                break;
            }

        if (!first) cout << endl;
        if (ok) {
            for (const auto& rect : v)
                cout << rect.est << ' ' << rect.oest << ' ' << rect.nord << ' ' << rect.sud << endl;
        } else cout << "no son nines russes" << endl;
    }
}

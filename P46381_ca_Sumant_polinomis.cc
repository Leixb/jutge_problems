#include <iostream>
#include <vector>
using namespace std;

template <typename T>
inline T abs(const T& a) {
    return (a < 0)? -a : a;
}

void escriu_polinomi(const vector<int>& v) {
    bool first = true;
    for (size_t i = 0; i < v.size(); ++i) {
        const int& c = v[i];
        if (c != 0) {
            const int exp = v.size()-i-1;

            if (c < 0) cout << (first? "-" : " - ");
            else if (!first) cout << " + ";

            if ((c != 1 and c != -1) or !exp) cout << abs(c);

            if (exp) cout << 'x';
            if (exp > 1) cout << '^' << exp;

            first = false;
        }
    }

    if (first) cout << 0; // Cas especial P(x) = 0

    cout << endl;
}

int main () {
    for (int dp; cin >> dp;) {
        vector <int> p(dp + 1);
        for (int& c : p) cin >> c;

        int dq;
        cin >> dq;
        vector <int> q(dq + 1);
        for (int& c : q) cin >> c;

        vector <int> &llarg = (dp > dq)? p : q;
        const vector <int> &curt = (dp > dq)? q : p;

        for (size_t i = 0; i < curt.size(); ++i) llarg[llarg.size()-1-i] += curt[curt.size()-1-i];

        escriu_polinomi(llarg);
    }
}

#include <bits/stdc++.h>
using namespace std;

void calcula_posicions(const vector<double>& v, int& p, int& q) {
    q = 0, p = 1;
    if (v[0] > v[1]) swap(q, p);
    for (size_t i = 2; i < v.size(); ++i)
        if (v[i] > v[p]) {
            q = p;
            p = i;
        }
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(6);
    for (int n; cin >> n;) {
        vector<double> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        int p, q;
        calcula_posicions(v, p, q);

        long double sum = 0;
        for (int i = q; i <= p; ++i) sum += v[i];

        cout << sum/(p-q+1) << endl;
    }
}

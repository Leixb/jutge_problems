#include <bits/stdc++.h>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
    int a=v[0],b=v[1];
    vector <int> w;
    for (size_t i = 2; i < v.size(); ++i) {
        if (b>a and b>v[i]) w.push_back(b);
        a = b;
        b = v[i];
    }
    return w;
}

int main () {
    int n;
    cin >> n;

    vector <int> v (n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    auto w = calcula_cims(v);

    cout << w.size() << ':';
    for (size_t i = 0; i < w.size(); ++i) cout << ' ' << w[i];
    cout << endl;

    bool found = false;
    for (size_t i = 0; i < w.size(); ++i) if (w[i]>w[w.size()-1]) {
        if (i!=0) cout << ' ';
        cout << w[i];
        found = true;
    }

    if (not found) cout << '-';
    cout << endl;
}

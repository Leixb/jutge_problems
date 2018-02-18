#include <bits/stdc++.h>
using namespace std;

vector<double> difference(const vector<double>& v1, const vector<double>& v2) {
    vector<double> v3;

    unsigned int i=0, j=0;

    while (i < v1.size() and j < v2.size())
        if (v1[i] == v2[j]) ++i;
        else if (v1[i] < v2[j]) {
            if (!v3.size() or v1[i] != v3.back()) v3.push_back(v1[i]);
            ++i;
        } else ++j;

    for (;i < v1.size(); ++i)
        if (!v3.size() or v1[i] != v3.back())
            v3.push_back(v1[i]);

    return v3;
}

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << '[';
    for (size_t i = 0; i < v.size(); ++i) os << " "[i==0] << v[i];
    os << ']';
    return os;
}

int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> a(n);
        cin >> a;
        int m;
        cin >> m;
        vector<double> b(m);
        cin >> b;

        cout << difference(a, b) << endl;
    }
}

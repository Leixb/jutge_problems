#include <bits/stdc++.h>
using namespace std;

double index_de_jaccard(const vector<int>& a, const vector<int>& b) {
    size_t pa=0, pb=0;
    int inter = 0;
    while (pa < a.size() and pb < b.size()) {
        if (a[pa] < b[pb]) ++pa;
        else if (a[pa] > b[pb]) ++pb;
        else ++inter, ++pa, ++pb;
    }

    return inter/double(a.size() + b.size() - inter);
}

int main () {
    cout.setf(ios::fixed); cout.precision(3);
    int n, m;
    while (cin >> m) {
        vector<int> a (m);

        for (int i = 0; i < m; ++i)
            cin >> a[i];

        cin >> n;
        vector<int> b (n);

        for (int i = 0; i < n; ++i)
            cin >> b[i];

        cout << index_de_jaccard(a, b) << endl;
    }
}

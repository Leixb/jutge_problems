#include <bits/stdc++.h>
using namespace std;

void merge(vector<double>& v, int l, int m, int r) {
    vector<double> a (v.begin()+l, v.begin()+m),
                   b (v.begin()+m, v.begin()+r);
    //for (int i = l; i <= m; ++i) a.push_back(v[i]);
    //for (int i = m+1; i <= r; ++i) b.push_back(v[i]);

    size_t i=0, j=0, k=l;
    while (i < a.size() and j < b.size())
        if (a[i] <= b[j]) v[k++] = a[i++];
        else v[k++] = b[j++];
    while (i < a.size()) v[k++] = a[i++];
    while (j < b.size()) v[k++] = b[j++];
}

void merge_sort(vector<double>& v, int l, int r) {
    if (l == r) return {v[l]};
    if (l < r) {
        int m = (l+r)/2;
        merge_sort(v, l, m);
        merge_sort(v, m+1, r);

        merge(v, l, m, r);
    }
}

void ordena_per_fusio(vector<double>& v) {
    merge_sort(v, 0, v.size());
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
    for (int n; cin >> n;) {
        vector <double> v (n);
        cin >> v;
        merge_sort(v, 0, v.size());
        cout << v << endl;
    }

}

#include <bits/stdc++.h>
using namespace std;

int find(int n, const vector<int>& v, int R) {
    int L = 0;
    while (L <= R) {
        int M = (L + R)/2;
        if (v[M] == n) return true;
        if (v[M] < n) L = M+1;
        else  R = M-1;
    }
    return false;
}

void goldbach(int n, const vector<int>& v, int j) {
    bool first = true;
    cout << n << " = ";

    for (int i = 0; v[i]*2 <= n; ++i) {
        if (find(n-v[i], v, j)) {
            if (first) first = false;
            else cout << ", ";
            cout << v[i] << '+' << n-v[i];
        }
    }
    cout << endl;
}

bitset <size_t(1e6+2)> not_primer;

void garbell () {
    not_primer[0]=1; not_primer[1]=1;
    const size_t size = size_t(sqrt(not_primer.size())+0.0001);
    for (size_t i = 2; i < size; ++i)
        if (not_primer[i]) continue;
        else for (size_t j = i*2; j < not_primer.size(); j+=i) not_primer[j]=1;
}

int main () {
    vector <int> v;
    int n;
    garbell();
    for (int i = 2; i <= 1e6; ++i) if (not not_primer[i]) v.push_back(i);
    while (cin >> n) {
        int j;
        for (j = n-1; j > 2; --j) if (not not_primer[j]) break;
        goldbach(n, v, j);
    }
}

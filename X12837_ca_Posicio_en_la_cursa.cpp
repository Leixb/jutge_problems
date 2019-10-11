#include <bits/stdc++.h>
using namespace std;

int posicio(const vector<double>& v, const double& t) {
    int L=0, R=v.size(), M;
    while(L <= R) {
        M = (L+R)/2;
        if (v[M] == t) return M;
        if (v[M] > t) R = M-1;
        else L = M+1;
    }
    return min(L, int(v.size()));
}

int main () {
    int n;
    cin >> n;

    vector<double> v(n);

    for (auto& i : v) cin >> i;

    sort(v.begin(), v.end());

    for (double time; cin >> time;)
        cout << "Time mark " << time << " would get position " << 1 + posicio(v, time) << endl;
}

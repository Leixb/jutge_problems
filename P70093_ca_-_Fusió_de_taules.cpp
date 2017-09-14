#include <iostream>
#include <vector>
using namespace std;

vector<double> fusio(const vector<double>& v1, const vector<double>& v2) {
    size_t p1 = 0, p2 = 0;
    vector <double> res;
    while (p1 < v1.size() and p2 < v2.size())
        if (v1[p1]<v2[p2]) res.push_back(v1[p1++]);
        else res.push_back(v2[p2++]);
    while (p1 < v1.size()) res.push_back(v1[p1++]);
    while (p2 < v2.size()) res.push_back(v2[p2++]);
    return res;
}

int main () {
    int n,m;
    while (cin >> n >> m) {
        vector <double> v1 (n), v2 (m);
        for (int i = 0; i < n; i++) cin >> v1[i];
        for (int i = 0; i < m; i++) cin >> v2[i];
        auto v =  fusio(v1,v2);
        for (int i = 0; i < n+m; ++i) cout << v[i] << ' ';
    }

}

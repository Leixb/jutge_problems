#include <bits/stdc++.h>
using namespace std;

int last_position_of(const vector<int> &v, int x) {
    for (int i = v.size()-1; i >= 0; --i) if (v[i] == x) return i;
    return v.size();
}

int main () {
    for (int n; cin >> n;) {
        vector <int> v(n);
        int sum = 0;
        for (auto& i : v) {
            cin >> i;
            sum += i;
        }
        cout << last_position_of(v, sum/n) << endl;
    }
}

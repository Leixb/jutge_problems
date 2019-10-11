#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        map <string, int> m;
        while (n--) {
            string paraula;
            cin >> paraula;
            ++m[paraula];
        }
        auto comp = [](const pair <string, int>& p1, const pair <string, int>& p2) -> bool {
            if (p1.second == p2.second) return p1.first < p2.first;
            return p1.second > p2.second;
        };
        set <pair <string, int>, decltype(comp)> S (m.begin(), m.end(), comp);
        for (auto i : S) cout << i.second << ' ' << i.first << endl;
        cout << "----------" << endl;
    }
}

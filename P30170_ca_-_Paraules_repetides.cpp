#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main () {
    for (int n; cin >> n;) {
        unordered_map <string,int> m;
        for (string s; n-- and cin >> s;) ++m[s];
        map <int, int> M;
        for (const auto& p : m) M[p.second] += p.first.size();
        for (const auto& p : M) cout << p.first << " : " << p.second << endl;
        cout << endl;
    }
}

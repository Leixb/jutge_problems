#include <iostream>
#include <vector>
using namespace std;

bool comp (vector <int>& v, int r) {
    for (auto it : v) if (r-it==it) return true;
    return false;
}

int main () {
    int n;
    while (cin >> n) {
        vector <int> v (n);
        int r = 0;
        while (n--) {
            cin >> v[n];
            r += v[n];
        }
        if (comp(v,r)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

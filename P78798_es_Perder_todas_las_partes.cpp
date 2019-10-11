#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        int m;
        cin >> m;
        vector <int> v (m);
        while (m--) cin >> v[m];
        sort(v.begin(),v.end());
        int sal = 0;
        for (auto i : v) 
            sal = n - max (0, i - sal);
        cout << n-sal << ' ' << v[0]<< endl;
    }
}

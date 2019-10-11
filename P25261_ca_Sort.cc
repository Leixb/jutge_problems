#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <int> v (n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(),v.end(),greater<int>());
        for (int i = 0; i < n; i++) {
            if (i!=0) cout << ' ';
            cout << v[i];
        }
        cout << endl;
    }
}

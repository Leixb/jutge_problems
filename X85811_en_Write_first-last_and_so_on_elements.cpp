#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        for (int i = 0; i < n/2; ++i) {
            if (i != 0) cout << ' ';
            cout << v[i] << ' ' << v[n-i-1];
        }
        if (n%2) cout << ' ' << v[n/2];
        cout << endl;
    }
}

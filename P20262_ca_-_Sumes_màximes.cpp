#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <int> v (n);
        int max = 0, r = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            r += v[i];
            if (r > max) max = r;
        }
        cout << max << ' ';
        max = 0, r = 0;
        for (int i = n-1; i >= 0; i--) {
            r += v[i];
            if (r > max) max = r;
        }
        cout << max << endl;
    }
}

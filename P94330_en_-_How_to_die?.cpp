#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        vector <int> v (n);
        vector <bool> f(n,0);
        for (int i = 0; i < n; i++) cin >> v[i];
        int p = n/2;
        bool b = 0;
        while (p>=0 and p<n) {
            if (f[p]) {
                cout << "tired" << endl;
                b=1;
                break;
            }
            if (v[p]==0) {
                cout << "bored" << endl;
                b=1;
                break;
            }
            f[p]=1;
            p = p+v[p];
        }
        if (b) continue;
        if (p < 0) cout << "drown" << endl;
        else cout << "thirsty" << endl;
    }
}

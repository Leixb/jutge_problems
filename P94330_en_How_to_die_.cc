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
        try {
            while (p>=0 and p<n) {
                if (f[p]) throw "tired";
                if (v[p]==0) throw "bored";
                f[p]=1;
                p += v[p];
            }
            if (p < 0) throw "drown";
            throw "thirsty";
        } catch (char const* s) {
            cout << s << endl;
        }
    }
}

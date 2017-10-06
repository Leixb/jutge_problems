#include <bits/stdc++.h>
using namespace std;

bool primer (int n) {
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) if (n%i==0) return false;
    return true;
}

int main () {
    int n;
    while (cin >> n) {
        bool found = false;
        vector <int> v (n);
        while (n--) cin >> v[n];
        for (size_t i = 0; i < v.size() and not found; ++i)
            for (size_t j = 0; j < v.size() and not found; ++j)
                if (i != j and primer(v[i]+v[j])) {
                    found = true;
                    break;
                }
        cout << ((found)? "si" : "no") << endl;
    }
}

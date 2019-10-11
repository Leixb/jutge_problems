#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main () {
    long a;
    map <long,long> m;
    while (cin >> a) {
        m.clear();
        long mx=0, nn=0;
        while (a--) {
            long n;
            cin >> n;
            m[n]++;
            if (m[n]>mx) {
                mx = m[n];
                nn=n;
            } else if (m[n]==mx) nn=max(n,nn);
        }
        cin >> a;
        while (a--) {
            long n;
            cin >> n;
            m[n]++;
            if (m[n]>mx) {
                mx = m[n];
                nn=n;
            } else if (m[n]==mx) nn=max(n,nn);
        }
        cout << nn << ' ' << mx << endl;
    }
}

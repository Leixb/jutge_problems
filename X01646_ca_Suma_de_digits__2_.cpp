#include <bits/stdc++.h>
using namespace std;

int main () {
    int b,n;
    cin >> b;
    while (cin >> n) {
        int sum = 0;
        int m = n;
        while (m>=1) {
            sum += m%b;
            m/=b;
        }
        cout << n << ": " << sum << endl;
    }
}

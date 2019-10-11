#include <bits/stdc++.h>
using namespace std;

void escriu_binari(int n) {
    string s = (n==0)? "0" : "";
    while (n > 0) {
        s = char('0'+n%2) + s;
        n/=2;
    }
    cout << s;
}

void escriu_azathoth(int n) {
    if (n==0) return;
    escriu_azathoth(n/50);
    escriu_binari(n%50);
    cout << '.';
}

int main () {
    int n;
    while (cin >> n) {
        cout << n << " = .";
        if (n==0) cout << "0.";
        escriu_azathoth(n);
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

void print(const int& n, int depth=0) {
    if (not n) return;
    print(n/10, depth+1);
    if (n%10) {
        cout << '|';
        for (int i = 0; i < 9; ++i) cout << ((i < n%10)? char('A' + depth) : ' ');
        cout << '|' << endl;
    }
}

int main () {
    for (string s; cin >> s;) {
        cout << s << endl << "+---------+" << endl;
        int sum = 0;
        for (int n; cin >> n and n >= 0;) sum += n;
        print(sum);
        cout << "+---------+" << endl << endl;
    }
}

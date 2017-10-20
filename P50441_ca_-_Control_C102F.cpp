#include <bits/stdc++.h>
using namespace std;

int main () {
    string s, jove;
    int n, mn = 1e5;
    cin >> jove >> mn;
    while (cin >> s >> n) if (n < mn) mn = n, jove = s;
    cout << jove << endl;
}

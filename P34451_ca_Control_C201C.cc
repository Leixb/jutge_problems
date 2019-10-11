#include <bits/stdc++.h>
using namespace std;

int main () {
    int x, cont = 0, n;
    cin >> x;
    while (cin >> n) cont += (n%x==0);
    cout << cont << endl;
}


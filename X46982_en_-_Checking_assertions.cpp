#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b;
    char c;
    cout << boolalpha;
    while (cin >> a >> c >> b)
        if (c == '<') cout << (a < b) << endl;
        else cout << (a > b) << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;

    if (a/100 == a%10 and b/100 == b%10 and c/100 == c%10) {
        if (a%10 < b%10 and b%10 < c%10) cout << "3-Increasing" << endl;
        else if (a%10 > b%10 and b%10 > c%10) cout << "3-Decreasing" << endl;
        else cout << "Nothing" << endl;
    } else cout << "Nothing" << endl;
}

#include <bits/stdc++.h>
using namespace std;

int digital_sum(int a, int b) {
    if (a > b) return digital_sum(b, a);
    if (!a and !b) return 0;
    return digital_sum(a/10, b/10)*10 + (a%10 + b%10)%10;
}

int main () {
    for (int a, b; cin >> a >> b;) cout << digital_sum(a, b) << endl;
}

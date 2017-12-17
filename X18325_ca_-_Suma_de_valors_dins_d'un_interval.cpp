#include <bits/stdc++.h>
using namespace std;

int main () {
    int l, r, sum=0, cont=0;
    cin >> l >> r;
    for (int n; cin >> n;)
        if (n >= l and n <= r) sum += n;
        else ++cont;
    cout << "Sum Inside: " << sum << endl << "Num Outside: " << cont << endl;
}

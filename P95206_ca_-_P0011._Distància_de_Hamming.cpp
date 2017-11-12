#include <bits/stdc++.h>
using namespace std;

void calcula(int a, int b, int& dist, int& sum) {
    if (a == b and a == 0) return;
    if (a%10 != b%10) ++dist, sum += a%10 + b%10;
    calcula(a/10, b/10, dist, sum);
}

int main () {
    int a, b;
    while (cin >> a >> b) {
        int dist=0, sum=0;
        calcula(a, b, dist, sum);
        cout << dist << ' ' << sum << endl;
    }
}

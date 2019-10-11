#include <bits/stdc++.h>
using namespace std;

bool es_diabolic(int n) {
    int m = n, sum = 0;
    while (m > 0) {
        sum += m%4;
        m/=4;
    }
    return not (n%(2*sum));
}

int main () {
    int n, cnt = 0;
    while (cin >> n and n != -1) cnt += es_diabolic(n);
    printf("%06d\n", cnt);
}

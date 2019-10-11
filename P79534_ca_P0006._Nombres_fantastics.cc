#include <bits/stdc++.h>
using namespace std;

bool es_fantastic(int x, bool p=1) {
    if (x < 10) return x%2==p;
    return x%2==p and es_fantastic(x/10, p^1);
}

int main () {
    int n, fantastics = 0, cnt_fa = 0, cnt = 0;
    while (cin >> n and ++cnt)
        if (es_fantastic(n)) {
            if (fantastics >= 2) ++cnt_fa;
            else ++fantastics;
        } else fantastics = 0;
    cout << "nombres: " << cnt << endl << "triplets fantastics: " << cnt_fa << endl;
}

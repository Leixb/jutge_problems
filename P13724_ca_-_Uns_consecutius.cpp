#include <bits/stdc++.h>
using namespace std;


long long sum_1(unsigned long long n) {
    long long cnt = 0;
    long long mc = -1e9;
    for(;n; n >>= 1) {
        cnt += n&1;
        mc = max(mc, cnt);
        if (!(n&1)) cnt = 0;
    }
    return mc;
}

int main(){
    long long n;
    while (cin >> n) cout << sum_1(n) << endl;
}

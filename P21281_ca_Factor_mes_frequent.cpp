#include <iostream>
#include <math.h>
using namespace std;

bool primer (int n) {
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) if (n%i==0) return false;
    return true;
}

void factor(int n, int& f, int& q) {
    f = -n; q = 0;
    int cnt = 0;
    int sq = sqrt(n);
    for (int i = 2; i <= sqrt(n)+1; i+=2) {
        while (n%i==0) {
            cnt++;
            n/=i;
        }
        if (cnt>q) {
            f = i;
            q = cnt;
        }
        cnt = 0;
        if (i%2==0) i--;
    }
    if (q==0) {
        f *= -1;
        q = 1;
    }
}

int main () {
    int n, f, q;
    while (cin >> n) {
        factor(n,f,q);
        cout << f << ' ' << q << endl;
    }
}

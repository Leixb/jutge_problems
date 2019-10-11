#include <iostream>
using namespace std;

int mcd (int a,int b) {
    if (b==0) return a;
    return mcd(b,a%b);
}

int main () {
    long long n;
    while (cin >> n) {
        long long a, b, mcm;
        if (n == 1) {
            cin >> a;
            cout << a << endl;
        } else if (n != 0 ){
            cin >> a >> b;
            mcm = a*b/mcd(a,b);
            for (int i = 2; i < n; i++) {
                cin >> a;
                mcm *= a/mcd(mcm,a);
            }
            cout << mcm << endl;
        }
    }
}

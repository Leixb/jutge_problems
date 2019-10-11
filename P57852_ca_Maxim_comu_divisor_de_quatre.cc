#include <iostream>
using namespace std;

int mcd (int a,int b) {
    if (b==0) return a;
    return mcd(b,a%b);
}

int mcd4 (int a,int b, int c, int d) {
    return mcd(mcd(a,b),mcd(c,d));
}

int main () {
	int a,b,c,d;
    while (cin >> a) {
        cin >> b >> c >> d;
        cout << mcd4(a,b,c,d) << endl;
    }
}

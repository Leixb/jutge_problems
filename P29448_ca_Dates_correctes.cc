#include <iostream>
using namespace std;

bool traspas (int n) {
    if (n%100==0) {
        if (n%400==0) return 1;
        else return 0;
    } else if (n%4==0) return 1;
    else return 0;
}

bool ok(int d, int m, int a) {
    if (d < 1 or d > 31) return false;
    if (m < 1 or m > 12) return false;
    if (m==2) {
        if (d > 29) return false;
        if (d == 29 and !traspas(a)) return false;
        return true;
    }
    return !(d == 31 and (m==4 or m==6 or m==9 or m==11)); 
}

int main () {
	int d,m,a;
    while (cin >> d) {
        cin >> m >> a;
        if (ok(d,m,a)) cout << "Data Correcta" << endl;
        else cout << "Data Incorrecta" << endl;
    }
}

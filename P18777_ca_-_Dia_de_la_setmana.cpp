#include <iostream>
#include <math.h>
using namespace std;

string dia_de_la_setmana(int d, int m, int a) {
    m -= 2;
    if (m<=0) {
        m+=12;
        a--;
    }
    int c = a/100, y = a-c*100;
    int f = floor(2.6*m - 0.2) + d + y + floor(y/4) + floor(c/4) - 2*c;
    f %= 7;
    if (f < 0) f += 7;
    switch (f) {
        case 0: return "diumenge";
        case 1: return "dilluns";
        case 2: return "dimarts";
        case 3: return "dimecres";
        case 4: return "dijous";
        case 5: return "divendres";
        case 6: return "dissabte";
    }
}

int main () {
    int d,m,a;
    while (cin >> d) {
        cin >> m >> a;
        cout << dia_de_la_setmana(d,m,a) << endl;
    }
}

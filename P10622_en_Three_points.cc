#include <bits/stdc++.h>
using namespace std;

int main () {
    double x1, y1;
    double x2, y2;
    double x3, y3;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {

        double a = hypot(x1 - x2, y1 - y2);
        double b = hypot(x3 - x2, y3 - y2);
        double c = hypot(x1 - x3, y1 - y3);
        double s = (a+b+c)/2;
        double A =  sqrt(s*(s-a)*(s-b)*(s-c));

        double ha = 2*A/a;
        double hb = 2*A/b;
        double hc = 2*A/c;

        cout << fixed << setprecision(4);

        cout << min(min(ha, hb), hc) << endl;

    }

}

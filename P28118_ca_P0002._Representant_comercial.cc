#include <bits/stdc++.h>
using namespace std;

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    string s;
    while (cin >> s) {
        double x1,y1,x2,y2, sum = 0;
        cin >> x1 >> y1;

        while (cin >> x2 >> y2) {
            sum+=distancia(x1,y1,x2,y2);
            x1 = x2, y1 = y2;
        }

        cin.clear();

        cout << "Trajecte " << s << ": " << sum << endl;
    }
}

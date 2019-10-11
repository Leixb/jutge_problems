#include <iostream>
using namespace std;

int main () {
	int n,cnt = 0;
    while (cin >> n) {
        cnt++;
        bool t = true;
        string a,b;
        if (n > 0) cin >> b;
        if (n!=1)
            for (int i = 1; i < n; i++) {
                cin >> a;
                t &= b <= a;
                b=a;
            }
        if (t) {
            cout << "La primera linia ordenada creixentment es la " << cnt << '.' << endl;
            return 0;
        }
    }
    cout << "No hi ha cap linia ordenada creixentment." << endl;
}

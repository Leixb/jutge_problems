#include <iostream>
using namespace std;

int main () {
	int n,cnt = 0,lst=-1;
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
        if (t) lst=cnt;
    }
    if (lst!=-1) cout <<  "L'ultima linia ordenada creixentment es la " << lst << '.' << endl;
    else cout << "No hi ha cap linia ordenada creixentment." << endl;
}

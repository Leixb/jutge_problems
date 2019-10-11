#include <iostream>
using namespace std;

int main () {
    int a,b;
    while (cin >> a) {
        cin >> b;
        int n,c=0;
        for (int i = 1; 1; i*=2) {
            if (a <= i) break;
            c++;
        }
        bool t = true;
        for (int i = c; i >= 0; i--) {
            bool aa = 1&(a>>i);
            bool bb = 1&(b>>i);
            if (!(t and !aa)) {
                cout << aa << bb;
                t = false;
            }
        }
        cout << endl;
    }
}

#include <iostream>
using namespace std;

int main () {
	int n,d=0;
    bool primer = true;
    while (cin >> n) {
        if (!primer) cout << endl;
        else primer = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << (i*n+j+d)%10;
            cout << endl;
        }
        d = (n*n+d)%10;
    }
}

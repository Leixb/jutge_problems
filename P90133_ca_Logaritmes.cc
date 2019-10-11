#include <iostream>
using namespace std;

int main () {
	int a,b;
    while (cin >> a) {
        cin >> b;
        int cont = 0, r = 1; 
        while (b >= r) {
            r*= a;
            cont++;
        }
        cout << cont-1 << endl;
    }
}

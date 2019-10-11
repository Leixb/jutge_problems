#include <iostream>
using namespace std;

int main () {
	int n;
    while (cin >> n) {
        int cont = 0;
        while (n!=1) {
            cont++;
            if (n%2==0) n/=2;
            else n = 3*n +1;
        }
        cout << cont << endl;
    }
}

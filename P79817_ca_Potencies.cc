#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int a,b;
    while (cin >> a) {
        int r = 1;
        cin >> b;
        for (int i = 0; i < b; i++) r*=a;
        cout << r << endl;
    }
}

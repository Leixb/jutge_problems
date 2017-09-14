#include <iostream>
using namespace std;

int main () {
	int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a = -1, b = -1, c = 0;
        while (a != 0) {
            cin >> a;
            if ( a > b and b != -1) c++;
            b = a;
        }
        cout << c << endl;
    }
}

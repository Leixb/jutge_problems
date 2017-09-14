#include <iostream>
using namespace std;

int main () {
	int n;
    cin >> n;
    while (n > 1) {
        cout << n%2;
        n/=2;
    }
    if (n == 0) cout << 0 << endl;
    else cout << 1 << endl;
}

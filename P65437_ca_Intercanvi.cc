#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
    return;
}

int main () {
	int a,b;
    while (cin >> a) {
        cin >> b;
        swap2(a,b);
        cout << a << ' ' << b << endl;
    }
}

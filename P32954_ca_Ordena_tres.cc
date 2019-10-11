#include <iostream>
using namespace std;

void sort3(int& a, int& b, int& c) {
    if (a > b) swap(a,b);
    if (b > c) swap(b,c);
    if (a > b) swap(a,b);
    return;
}

int main () {
	int a,b,c;
    while (cin >> a) {
        cin >> b >> c;
        sort3(a,b,c);
        cout << a << ' ' << b << ' ' << c << endl;
    }
}

#include <iostream>
using namespace std;

int main () {
	int a,b,c = 0;
    while (cin >> a) {
        cout << '#' << ++c << " : ";
        cin >> b;
        if (a%b != 0) cout << (a/b+1)*b << endl;
        else cout << a << endl;
    }
}

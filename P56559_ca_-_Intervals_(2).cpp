#include <iostream>
using namespace std;

int main () {
	int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 and y1 == y2) cout << '=' << endl;
    else if (x1 <= x2 and y1 >= y2) cout << 2 << endl;
    else if (x1 >= x2 and y1 <= y2) cout << 1 << endl;
    else cout << '?' << endl;
}

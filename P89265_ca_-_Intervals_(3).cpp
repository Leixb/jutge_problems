#include <iostream>
using namespace std;

int main () {
	int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 and y1 == y2) cout << '=';
    else if (x1 <= x2 and y1 >= y2) cout << 2;
    else if (x1 >= x2 and y1 <= y2) cout << 1;
    else cout << '?';
    
    cout << " , ";
    
    x1 = max(x1,x2);
    y1 = min(y1,y2);
    if (x1>y1) cout << "[]" << endl;
    else cout << '[' << x1 << ',' << y1 << ']' << endl;
}

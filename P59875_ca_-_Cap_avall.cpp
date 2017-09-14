#include <iostream>
using namespace std;

int main () {
	int x,y;
    cin >> x >> y;
    if (x > y) swap(x,y);
    for (int i = y; i >= x; i--) cout << i << endl;
}

#include <iostream>
using namespace std;

int main () {
	int a,b;
    cin >> a >> b;
    for (int i = a; i < b; i++) cout << i << ',';
    if (b>=a) cout << b;
    cout << endl;
}

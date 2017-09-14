#include <iostream>
using namespace std;

int main () {
	int n;
    cin >> n;
    for (int i = 0; i < n; i++) cout << i*i*i << ',';
    cout << n*n*n << endl;
}

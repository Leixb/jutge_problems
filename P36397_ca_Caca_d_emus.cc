#include <iostream>
using namespace std;

int main() {
	for (unsigned long long n; cin >> n;) cout << ((n==1)? 2 : 3 + (n&1)) << endl;
}

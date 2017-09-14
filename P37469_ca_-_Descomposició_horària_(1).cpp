#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int h, m, s;
	s = n%60;
	m = n/60;
	h = m/60;
	m = m%60;
	cout << h << ' ' << m << ' ' << s << endl;
}

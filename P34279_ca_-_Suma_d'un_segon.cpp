#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int h,m,s;
	cin >> h >> m >> s;
	s++;
	if (s==60) {
		m++;
		s = 0;
	}
	if (m==60) {
		h++;
		m = 0;
	}
	if (h==24) h = 0;
	cout << setfill('0') << setw(2) << h << ':' 
		 << setfill('0') << setw(2) << m << ':' 
		 << setfill('0') << setw(2) << s << endl;
}

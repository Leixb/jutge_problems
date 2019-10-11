#include <iostream>
using namespace std;

int main () {
	int n;
    cin >> n;
    while(n > 15) {
        int temp = n%16;
        n /=16;
        if (temp >= 10) cout << (char)(temp+'A'-10);
        else cout << temp;
    }
    if (n >= 10) cout << (char)(n+'A'-10) << endl;
    else cout << n << endl;
}

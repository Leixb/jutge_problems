#include <iostream>
using namespace std;

int aval (int c) {
    string s;
    int n = c;
    if (cin >> s) {
        n = aval(c+1);
        if (n > 0) cout << s << endl;
        return n-1;
    }
    return c/2 + c%2;
    
}

int main () {
	aval(0);
}

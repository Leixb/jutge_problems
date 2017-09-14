#include <iostream>
using namespace std;

int aval (int c) {
    string s;
    int n = c;
    if (cin >> s) {
        n = aval(c);
        if (n > 0) cout << s << endl;
        return n-1;
    }
    return c;
    
}

int main () {
    int n;
    cin >> n;
	aval(n);
}

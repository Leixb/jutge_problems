#include <iostream>
using namespace std;

void aval (int c) {
    string s;
    cin >> s;
    if (c > 0) {
        aval(c-1);
        cout << s << endl;
    }
}

int main () {
    int n;
    cin >> n;
	aval(n);
}

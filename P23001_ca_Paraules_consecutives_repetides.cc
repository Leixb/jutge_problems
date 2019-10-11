#include <iostream>
using namespace std;

int main () {
	string s, s2;
    cin >> s;
    int c = 1, mx = 1;
    while (cin >> s2) {
        if (s2==s) c++;
        else {
            if (c > mx) mx = c;
            c = 0;
        }
    }
    cout << max(c,mx) << endl;
}

#include <iostream>
using namespace std;

void aval () {
    string s;
    if (cin >> s) {
        aval();
        cout << s << endl;
    }
}

int main () {
	aval();
}

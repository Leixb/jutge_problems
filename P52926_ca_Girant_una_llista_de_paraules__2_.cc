#include <iostream>
using namespace std;

void aval () {
    string s;
    cin >> s;
    if (s != "fi") {
        aval();
        cout << s << endl;
    }
}

int main () {
	aval();
}

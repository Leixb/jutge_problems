#include <iostream>
using namespace std;

int main () {
	string s;
    bool pr = false, fi = false;
    int c = 0;
    while (cin >> s) {
        if (s=="final") {
            if (pr) cout << c << endl;
            else cout << "sequencia incorrecta" << endl;
            return 1;
        }
        if (pr) c++;
        if (s == "principi") pr = true;
    }
    cout << "sequencia incorrecta" << endl;
}

#include <iostream>
using namespace std;

int main () {
    char c = '0';
    bool as = false;
    while ( c != '.') {
        cin >> c;
        if (c=='a') {
            as = true;
            break;
        }
    }
    if (as) cout << "si" << endl;
    else cout << "no" << endl;
}

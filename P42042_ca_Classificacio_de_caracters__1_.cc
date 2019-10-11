#include <iostream>
using namespace std;

int main () {
    char c;
    cin >> c;
    if (c < 'a') {
        cout << "majuscula" << endl;
        c += ('a'-'A');
    } else cout << "minuscula" << endl;
    switch (c) {
        case 'a': cout << "vocal" << endl; break;
        case 'e': cout << "vocal" << endl; break;
        case 'i': cout << "vocal" << endl; break;
        case 'o': cout << "vocal" << endl; break;
        case 'u': cout << "vocal" << endl; break;
        default: cout << "consonant" << endl;
    }
}
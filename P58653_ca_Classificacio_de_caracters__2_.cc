#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) { cout << s << "('" << c << "') = "; if (b) cout << "cert" << endl; else cout << "fals" << endl; }

int main () {
	char c,C;
    cin >> c;
    C = c;
    bool majus = c >= 'A' and c <= 'Z';
    if (majus) c = c -'A'+'a';
    bool lletra = (c >= 'a' and c <= 'z');
    escriu_linia(C, "lletra", lletra);
    if (c=='a' or c=='e' or c=='i' or c=='o' or c=='u') {
        escriu_linia(C,"vocal",true);
        escriu_linia(C,"consonant",false);
    } else if (lletra) {
        escriu_linia(C,"vocal",false);
        escriu_linia(C,"consonant",true);
    } else {
        escriu_linia(C,"vocal",false);
        escriu_linia(C,"consonant",false);
    }
    if (majus) {
        escriu_linia(C,"majuscula",true);
        escriu_linia(C,"minuscula",false);
    } else if (lletra) {
        escriu_linia(C,"majuscula",false);
        escriu_linia(C,"minuscula",true);
    } else {
        escriu_linia(C,"majuscula",false);
        escriu_linia(C,"minuscula",false);
    }
    escriu_linia(C,"digit", c >= '0' and c <= '9');
}

#include <iostream>
using namespace std;

char codificat(char c, int k) {
    if ( c == '_') return ' ';
    else if (c == '.') return '\n';
    if (c <= 'z' and c >= 'a') {
        k = k%('z'-'a'+1);
        c -= 'a';
        c += k;
        c = c%('z'-'a'+1);
        c += 'A';
    }
    return c;    
}

int main () {
	int k;
    while (cin >> k) {
        char c = 'a';
        while ( c != '.') {
            cin >> c;
            cout << codificat(c,k);
        }
    }
}
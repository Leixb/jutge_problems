#include <iostream>
#include <sstream>
using namespace std;

void bin (int n) {
    if (n<=1) cout << n;
    else {
        bin(n/2);
        cout << n%2;
    }
}

void oct (int n) {
    if (n<=7) cout << n;
    else {
        oct(n/8);
        cout << n%8;
    }
}

void hex (int n) {
    int r = n%16;
    char c = 'A';
    if (n < 16) {
        if (n < 10) cout << n;
        else {
            c += n-10;
            cout << c;
        }
    } else {
        hex(n/16);
        if (r < 10) cout << r;
        else {
            c += r-10;
            cout << c;
        }
    }
}

int main () {
	int n;
    while(cin >> n) {
        cout << n << " = ";
        bin(n);
        cout << ", "; 
        oct(n);
        cout << ", ";
        hex(n);
        cout << endl;
    }
}

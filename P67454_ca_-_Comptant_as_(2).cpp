#include <iostream>
using namespace std;

int main () {
	char c = ' ';
    int cont = 0;
    while (c != '.') {
        cin >> c;
        if (c == 'a') cont++;
    }
    cout << cont << endl;
}

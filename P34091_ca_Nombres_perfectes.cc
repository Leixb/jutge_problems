#include <iostream>
using namespace std;

bool es_perfecte(int n) {
    switch (n) {
        case 6 : return 1;
        case 28 : return 1;
        case 496 : return 1;
        case 8128 : return 1;
        case  33550336 : return 1;
        default : return 0;
    }
}

int main () {
	int n;
    while (cin >> n) {
        if (es_perfecte(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}

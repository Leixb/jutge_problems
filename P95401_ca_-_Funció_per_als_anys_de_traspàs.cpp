#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {
    if (any%100==0) {
        if (any%400==0) return 1;
        else return 0;
    } else if (any%4==0) return 1;
    else return 0;
}

int main () {
	int any;
    while (cin >> any) {
        if (es_any_de_traspas(any)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}

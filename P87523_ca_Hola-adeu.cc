#include <iostream>
using namespace std;

int main () {
    char c;
    int n = 0;
    string s;
    while (cin >> c) {
        if (n > 0) s+=c;
        n--;
        if (n==0) {
            if (s=="hola") {
                cout << "hola" << endl;
                return 1;
            }
        }
        if (c=='h') {
            n = 3;
            s = "h";
        }
    }
    cout << "adeu" << endl;
}

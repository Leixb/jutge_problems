#include <iostream>
using namespace std;

int aval () {
    char c,g;
    cin >> c;
    if (c=='(') {
        int a = aval();
        cin >> c;
        int b = aval();
        cin >> g;
        if (c == '+') return a+b;
        else if (c == '-') return a-b;
        else if (c == '*') return a*b;
    } else if (c!=')') return c-'0';
}

int main () {
	cout << aval() << endl;
}

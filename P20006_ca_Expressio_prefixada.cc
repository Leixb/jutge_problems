#include <iostream>
using namespace std;

int aval () {
    char c;
    cin >> c;
    if (c == '*')       return aval()*aval();
    else if (c == '+')  return aval()+aval();
    else if ( c== '-')  return aval()-aval();
    else                return c-'0';
}

int main () {
	cout << aval() << endl;
}

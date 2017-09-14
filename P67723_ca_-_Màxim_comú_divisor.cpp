#include <iostream>
using namespace std;

int egcd (int a,int b) {
    if (b==0) return a;
    return egcd(b,a%b);
}

int main () {
	int a,b;
    cin >> a >> b;
    cout << "El mcd de " << a << " i " << b << " es " << egcd(a,b)  << '.' << endl;
}

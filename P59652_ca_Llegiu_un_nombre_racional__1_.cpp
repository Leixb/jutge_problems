#include <iostream>
using namespace std;

int egcd (int a,int b) {
    if (b==0) return a;
    return egcd(b,a%b);
}


void read_rational(int& num, int& den) {
    string s;
    cin >> s;
    num = 0, den = 0;
    bool deno = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='/') deno = true;
        else {
            if (deno) den = den*10 + (int)(s[i]-'0');
            else num = num*10 + (int)(s[i]-'0');
        }
    }
    int mcd = egcd(num,den);
    num /= mcd;
    den /= mcd;
}

int main () {
	int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
}

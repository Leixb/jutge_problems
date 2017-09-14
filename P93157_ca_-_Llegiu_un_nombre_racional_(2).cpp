#include <iostream>
#include <sstream>
using namespace std;

int egcd (int a,int b) {
    if (b==0) return a;
    return egcd(b,a%b);
}


bool read_rational(int& num, int& den) {
    string s;
    cin >> s;
    bool t = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='/') {
            s[i] = ' ';
            t = true;
        } else if (!(s[i]>='0' and s[i] <= '9')) return false;
    }
    if (!t) return false;
    stringstream ss;
    ss << s;
    ss >> num >> den;
    if (den == 0) return false;
    int mcd = egcd(num,den);
    num /= mcd;
    den /= mcd;
    return true;
}

int main () {
    int num, den; 
    while (read_rational(num, den)) cout << num << ' ' << den << endl;
}

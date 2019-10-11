#include <iostream>
using namespace std;

template <class T>
inline T abs (const T& n) { return (n<0)? -n: n; }

string negbin(int n) {
    string res="";
    if (n==0) return "0";
    int r=0;
    while (n!=0) {
        r=n%-2;
        n/=-2;
        if (r < 0) {
            n++;
            r+=2;
        }
        res+=r+'0';
    }
    return res;
}

int main () {
    int n;
    while (cin >> n) {
        cout << n << ": ";
        string s = negbin(n);
        for (int i = s.size()-1; i >= 0; i--) cout << s[i];
        cout << endl;
    }
}

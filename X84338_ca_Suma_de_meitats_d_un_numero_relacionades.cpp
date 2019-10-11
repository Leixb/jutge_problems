#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    if (s.size()%2) cout << "res" << endl;
    else {
        int a=0,b=0;
        for (int i = 0; i < s.size()/2; ++i) {
            a+=s[i]-'0';
            b+=s[i+s.size()/2]-'0';
        }
        cout << a << ((a < b)? " < " : ((a==b)? " = " : " > ")) << b << endl;
    }
}

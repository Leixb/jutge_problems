#include <bits/stdc++.h>
using namespace std;

// define here additional functions and/or procedures
// if you need them 

// Pre: 0<=d<=9 and 0<=x.
void write_digit(int d,int x) {
    while (x--) cout << d;
}

// Pre: 0<n.
void write_expanded(int n) {
    string s = to_string(n);
    for (size_t i = 0; i < s.size(); ++i) write_digit(s[i]-'0',s[i]-'0'+1);
    cout << endl;
}


int main () {
    int n;
    while (cin >> n) write_expanded(n);
}

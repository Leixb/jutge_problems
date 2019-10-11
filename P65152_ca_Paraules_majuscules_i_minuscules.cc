#include <bits/stdc++.h>
using namespace std;

int main () {
    string minu="", maju="";
    for (string s; cin >> s and (minu=="" or maju=="");)
        if (s[0] <= 'Z') maju = (maju==""? s : maju);
        else minu = (minu==""? s : minu);
    cout << (maju != ""? maju : "No hi ha cap paraula que comenci amb majuscula.") << endl;
    cout << (minu != ""? minu : "No hi ha cap paraula que comenci amb minuscula.") << endl;
}

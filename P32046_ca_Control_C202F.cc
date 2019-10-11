#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    cout << "nombres que acaben igual que " << s << ':' << endl;
    string primer = "";
    for (int i = s.size()-3; i < s.size(); ++i ) primer+=s[i];
    int cont = 0;
    while (cin >> s) {
        string comp="";
        for (int i = s.size()-3; i < s.size(); ++i ) comp+=s[i];
        if (comp == primer) { 
            cout << s << endl;
            ++cont;
        }
    }
    cout << "total: " << cont << endl;
}


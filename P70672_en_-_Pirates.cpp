#include <iostream>
using namespace std;

bool vocal (char c) {
    if (c>='A' and c <='Z') c+='a'-'A';
    return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
}

int main () {
    string s;
    while (getline(cin,s) and s!="end") {
        for (size_t i = 0; i < s.size(); i++) {
            if ((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z')) if (!vocal(s[i])) cout << s[i] << 'o';
            cout << s[i];
        }
        cout << endl;
    }
}

#include <iostream>
#include <sstream>
//#include <vector>
using namespace std;

int main () {
    string s;
    while (getline(cin,s)) {
        if (s[0]=='-') break;
        for (size_t  i = 0; i < s.size(); i++) if (s[i] >= 'a' and s[i] <= 'z' and (i == 0 or s[i-1]==' ')) cout << (char)(s[i]+'A'-'a'); else cout << s[i];
        cout << endl;
    }
}

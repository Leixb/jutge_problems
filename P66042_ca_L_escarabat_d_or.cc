#include <iostream>
#include <map>
using namespace std;

int main () {
	char c;
    while (cin >> c) {
        map <char,char> m;
        m[c]='a';
        m['_']=' ';
        for (char i = 'b'; i <= 'z'; i++) {
            cin >> c;
            m[c]=i;
        }
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            string s = "";
            cin >> s;
            for (char j : s) cout << m[j];
            cout << endl;
        }
        cout << endl;
        m.erase(m.begin(),m.end());
    }
        
}

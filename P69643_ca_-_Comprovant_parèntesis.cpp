#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main () {
    string s;
    while (cin >> s) {
        stack <char> ss;
        for (size_t i = 0; i < s.size(); i++)
            if (ss.size() and ss.top()=='(' and s[i]==')') ss.pop();
            else if (ss.size() and ss.top()=='[' and s[i]==']') ss.pop();
            else ss.push(s[i]);
        if (ss.size()) cout << s << " es incorrecta" << endl;
        else cout << s << " es correcta" << endl;
    }
}

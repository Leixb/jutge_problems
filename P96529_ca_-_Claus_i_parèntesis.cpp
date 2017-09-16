#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    while (cin >> s) {
        stack <char> S;
        for (char c : s) {
            if ( c == '(' or c == '[') S.push(c);
            else {
                if (S.empty()) {
                    S.push(c);
                    break;
                } else {
                    if (c == ')' and S.top() == '(') S.pop();
                    else if (c == ']' and S.top() == '[') S.pop();
                    else break;
                }
            }
        }
        cout << ((S.empty())? "si" : "no") << endl;
    }
}


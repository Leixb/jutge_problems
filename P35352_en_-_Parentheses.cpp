#include <bits/stdc++.h>
using namespace std;

bool paren_ok(const string& s) {
    stack <char> S;

    for (const auto& c : s)
        if (c == '(' or c == '[') S.push(c);
        else if (S.empty()) return false;
        else if (c == ')' and S.top() == '(') S.pop();
        else if (c == ']' and S.top() == '[') S.pop();
        else return false;

    return S.empty();
}

int main () {
    for (string s; cin >> s;) cout << (paren_ok(s)? "correct" : "incorrect") << endl;
}

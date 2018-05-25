#include <bits/stdc++.h>
using namespace std;

int main () {
    stack<char> S;
    for (char c; cin >> c and c != '.';)
        if (c == ')' and !S.empty() and S.top() == '(') S.pop();
        else if (c == ']' and !S.empty() and S.top() == '[') S.pop();
        else S.push(c);
    cout << (S.empty()? "Correcte" : "Incorrecte") << endl;
}

#include <iostream>
#include <stack>
using namespace std;

inline bool isletter(const char &c) {
    return c >= 'a' and c <= 'z';
}

int main(int argc, char *argv[]) {
    for (string s; cin >> s;) {
        stack<char> S;
        bool ok = true;
        bool letter = false, closing = false;
        for (const char &c: s) {
            if (c == '[' or c == '(') {
                closing = false;
                if (letter) ok = false;
                S.push(c);
            } else if (S.empty()) {
                ok = false;
            } else if (c == ')') {
                if (S.top() == '(' and (letter or closing)) {
                    letter = false, closing = true;
                    S.pop();
                }
                else ok = false;
            } else if (c == ']') {
                if (S.top() == '[' and (letter or closing)) {
                    letter = false, closing = true;
                    S.pop();
                }
                else ok = false;
            } else {
                if (letter) ok = false;
                letter = true;
            }
            if (!ok) break;
        }
        ok = ok and S.empty();
        cout << s << ": "  << (ok? "si" : "no") << endl;
    }
}

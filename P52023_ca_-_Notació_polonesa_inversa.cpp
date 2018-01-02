#include <bits/stdc++.h>
using namespace std;

int main () {
    for (string expressio; getline(cin, expressio);) {
        istringstream expBuff (expressio);
        stack<int> S;
        for (string op; expBuff >> op;) {
            if (op == "+" or op == "-" or op == "*") {
                const int a = S.top(); S.pop();
                const int b = S.top(); S.pop();

                if (op == "+") S.push(a + b);
                else if (op == "-") S.push(b - a);
                else S.push(a*b);

            } else S.push(stoi(op));
        }
        cout << S.top() << endl;
    }
}

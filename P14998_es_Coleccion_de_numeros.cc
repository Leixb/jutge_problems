#include <bits/stdc++.h>
using namespace std;

int main () {
    priority_queue <int> Q;
    for (char c; cin >> c;) {
        if (c == 'G') {
            int x;
            cin >> x;
            Q.push(x);
        } else if (c == 'C') {
            if (Q.empty()) cout << "error: no hay elementos" << endl;
            else cout << Q.top() << endl;
        } else if (c == 'E') {
            if (!Q.empty()) Q.pop();
            else cout << "error: no hay elementos" << endl;
        } else if (c == 'I') {
            int x;
            cin >> x;
            if (Q.empty()) cout << "error: no hay elementos" << endl;
            else {
                int n = Q.top() + x;
                Q.pop();
                Q.push(n);
            }
        } else {
            int x;
            cin >> x;
            if (Q.empty()) cout << "error: no hay elementos" << endl;
            else {
                int n = Q.top() - x;
                Q.pop();
                Q.push(n);
            }
        }
    }
}

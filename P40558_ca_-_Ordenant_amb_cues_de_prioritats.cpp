#include <bits/stdc++.h>
using namespace std;

int main () {
    priority_queue<int, vector<int>, greater<int> > G;
    priority_queue<int> S;

    for (int n; cin >> n;) G.push(n), S.push(n);

    while (!G.empty()) {
        cout << G.top();
        G.pop();
        if (!G.empty()) cout << ' ';
    }
    cout << endl;

    while (!S.empty()) {
        cout << S.top();
        S.pop();
        if (!S.empty()) cout << ' ';
    }
    cout << endl;
}

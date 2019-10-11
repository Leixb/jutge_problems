#include <bits/stdc++.h>
using namespace std;

int main () {
    for (string w; cin >> w;) {

        auto comp = [&](const string& a, const string& b) -> bool {
            if (a.size() == b.size()) {
                string W = w.substr(0, a.size());
                if (a < W and b >= W) return true;
                if (b < W and a >= W) return false;
                return a > b;
            } else return a.size() > b.size();
        };

        priority_queue<string, vector<string>, decltype(comp)> q(comp);

        int tickets = 0;
        for (char action; cin >> action and action != 'E';) {

            if (action == 'T') ++tickets;
            else {
                string code;
                cin >> code;
                q.push(code);
            }

            for (;tickets and !q.empty(); q.pop(), --tickets)
                cout << q.top() << endl;

        }

        cout << tickets << " ticket(s) left" << endl
             << q.size() << " supporter(s) with no ticket" << endl << endl;
    }
}

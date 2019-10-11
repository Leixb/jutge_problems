#include <bits/stdc++.h>
using namespace std;

int main () {

    cout << fixed << setprecision(4);


    int mn, mx;
    double mean;
    priority_queue <int, vector<int>, greater<int> > q;
    for (string s; cin >> s;) {
        if (s == "number") {
            int n;
            cin >> n;
            if (!q.empty())
                mn = min(mn, n), mx = max(mx, n),
                mean = (mean*(q.size())+n)/(q.size()+1);
            else mean = mn = mx = n;
            q.push(n);
        } else if (!q.empty()) { // delete
            const int n = q.top();
            q.pop();
            if (!q.empty()) {
                mn = q.top();
                mean = (mean*(q.size()+1)-n)/q.size();
            }
        }

        if (q.empty()) cout << "no elements" << endl;
        else cout << "minimum: " << mn
                << ", maximum: "<< mx
                << ", average: " << mean << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int n; cin >> n and n;) {
        priority_queue <double, vector<double>, greater<double> > q;
        double res = 1;
        for (int i = 0; i < n; ++i) {
            double tmp;
            cin >> tmp;
            q.push(tmp);
            res *= tmp;
        }


        while (q.size() >= 2) {
            const double a = q.top();
            q.pop();
            const double b = q.top();
            q.pop();

            const double push = a * b;

            q.push(push);
            res *= push;
        }

        while (res >= 1e7) res /= 10;

        cout << long(res) << endl;
    }
}

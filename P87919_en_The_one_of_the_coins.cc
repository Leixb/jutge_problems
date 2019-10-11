#include <iostream>
#include <vector>
#include <stack>
#include <limits>
#include <algorithm>
using namespace std;

vector <int> d;
vector <int> s;
stack <int> ss;
const int l = numeric_limits<int>::max()-1;

bool din (int n) {
    if (n == 0) return 1;
    else if (n < 0 or n >= d.size()) return 0;
    if (d[n]==-1)
        for (size_t i = 0; i < s.size(); ++i) {
            if (din(n-s[i])) {
                ss.push(s[i]);
                return 1;
            } else d[n]=-2;
        }
    return 0;
}

int main () {
    int n;
    while (cin >> n) {
        s.resize(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        sort(s.begin(),s.end(),greater<int>());
        int C;
        cin >> C;
        d = vector <int> (C+1,-1);
        d[0]=0;
        if (!din(C)) cout << -1 << endl;
        else {
            cout << ss.top();
            ss.pop();
            while (!ss.empty()) {
                cout << ',' << ss.top();
                ss.pop();
            }
            cout << endl;
        }
    }
}

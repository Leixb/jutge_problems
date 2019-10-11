#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack <int> s;
    int n;
    while (cin >> n) {
        while (n--) {
            int p;
            cin >> p;
            s.push(p);
        }
        if (!s.empty()) {
            cout << s.top();
            s.pop();
        }
        while (!s.empty()) {
            cout << ' ' << s.top();
            s.pop();
        }
        cout << endl;
    }
}

#include <iostream>
using namespace std;

int main () {
	int n;
    while (cin >> n) {
        int m, mx;
        cin >> mx;
        for (int i = 1; i < n; i++) {
            cin >> m;
            mx = max(m,mx);
        }
        cout << mx << endl;
    }
}

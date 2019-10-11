#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n;
    while (cin >> n) {
        vector <bool> v = vector <bool> (n+1, true);
        for (int i = 1; i < n; i++) {
            int m;
            cin >> m;
            v[m] = false;
        }
        for (int i = 1; i <= n; i++) if (v[i]) cout << i << endl;
    }
}

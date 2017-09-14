#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n;
    while (cin >> n) {
        int sum = 0;
        vector <int> v (0);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            v.push_back(num);
            sum += num;
        }
        bool t = false;
        for (auto i : v) {
            t = t or (sum-i == i);
            if (t) break;
        }
        if (t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
    int n, k;
    while (cin >> n >> k) {
        vector<int> v(n);
        for (int& i : v) cin >> i;
        int curr = 0;
        vector<int>::const_iterator r_it = v.begin();
        for (int i = 0; i < k; ++i, ++r_it) curr += *r_it;
        int mx = curr;
        for (vector<int>::const_iterator l_it = v.begin(); r_it != v.end(); ++r_it, ++l_it) {
            curr += *r_it - *l_it;
            if (curr > mx) mx = curr;
        }
        cout << mx << endl;
    }
}

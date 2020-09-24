#include <iostream>
#include <vector>
using namespace std;

int transverse(int nivell) {
    int fills, mn = 1e6, mx = 0;
    cin >> fills;
    if (fills == 0) return 1;
    bool avl = true;
    while (fills--) {
        int h = transverse(nivell + 1);
        if (h < 0) avl = false, h = -h;
        mn = min(mn, h);
        mx = max(mx, h);
    }
    return (mx - mn <= 1 and avl)? mx + 1 : -mx - 1;
}

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    while (n--) {
        int h = transverse(0);
        bool avl = true;
        if (h < 0) avl = false, h = -h;
        cout << "alcada " << h << ", ";
        if (not avl) cout << "no ";
        cout << "es avl" << endl;
        
    }
}

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int m;
        cin >> m;
        double nm, mx,mn,mj;
        cin >> mx;
        mn = mx;
        mj = mx;
        for (int j = 1; j < m; j++) {
            cin >> nm;
            mx = max(nm,mx);
            mn = min(nm,mn);
            mj += nm;
        }
        cout << fixed << setprecision(4) << mn << ' ' << mx << ' ' << mj/m << endl;
    }
}

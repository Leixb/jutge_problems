#include <iostream>
using namespace std;

void min_max(int a, int b, int& mn, int& mx) {
    mn = min(a,b);
    mx = max(a,b);
    return ;
}

int main () {
	int a,b,mn,mx;
    while (cin >> a) {
        cin >> b;
        min_max(a,b,mn,mx);
        cout << mn << ' ' << mx << endl;
    }
}

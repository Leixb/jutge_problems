#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector <int> v (3);
#define a v[0]
#define b v[1]
#define c v[2]
    while (cin >> a >> b >> c) {
        sort (v.begin(),v.end());
        if (c*c==a*a+b*b) cout << a*b/2 << endl;
        else if (a+b>c) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

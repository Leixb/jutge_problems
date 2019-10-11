#include <bits/stdc++.h>
using namespace std;

int main () {
    string codi;
    while (cin >> codi) {
        int s = 0;
        for (size_t i = 0; i < codi.size(); ++i) s+=(codi[i]-'0')*((i%2)? 3 : 1);
        cout << codi << (10-s%10)%10 << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    string codi;
    while (cin >> codi) {
        int mult, tot = 0;
        for (int i = 0; i < 10; ++i)
            if (codi[i]=='?') mult = 10-i;
            else tot += (10-i)*((codi[i]=='X')? 10 : codi[i]-'0');
        for (int i = 0; i <= 10; ++i)
            if ((tot + mult*i)%11==0) cout << char((i==10)? 'X' : i + '0') << endl;
    }
}

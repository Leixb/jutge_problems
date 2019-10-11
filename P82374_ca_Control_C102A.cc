#include <bits/stdc++.h>
using namespace std;

int main () {
    int x,a,b,c,d;
    cin >> x >> a >> b >> c >> d;
    cout << (( (x >= a and x <=b) or (x >= c and x <=d))? "si" : "no") << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main () {
    string n;
    cin >> n;
    int s=0,p=0;
    for (size_t i = 0; i < n.size(); ++i)
        if (i%2) s+= n[n.size()-1-i]-'0';
        else p+= n[n.size()-1-i]-'0';
    cout << p << ' ' << s << endl;
    if (s>p) swap(s,p);
    if (s==0) cout << s << " = 0 * " << p << endl;
    else if (p%s==0) cout << p << " = " << p/s << " * " << s << endl;
    else cout << "res" << endl;
}

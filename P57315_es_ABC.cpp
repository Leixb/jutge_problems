#include <bits/stdc++.h>
using namespace std;

int main () {
    map<char,int> m;
    cin >> m['A'] >> m['B'] >> m['C'];
    if (m['A']>m['B']) swap(m['A'],m['B']);
    if (m['A']>m['C']) swap(m['A'],m['C']);
    if (m['B']>m['C']) swap(m['B'],m['C']);
    char A,B,C;
    cin >> A >> B >> C;
    cout << m[A] << ' ' << m[B] << ' ' << m[C] << endl;
}

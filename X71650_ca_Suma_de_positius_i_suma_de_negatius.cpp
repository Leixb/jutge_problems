#include <bits/stdc++.h>
using namespace std;

int main () {
    int pos=0, neg=0;
    for (int n; cin >> n;)
        if (n > 0) pos += n;
        else neg += n;
    cout << "Sum Pos: " << pos << endl << "Sum Neg: " << neg << endl;
}

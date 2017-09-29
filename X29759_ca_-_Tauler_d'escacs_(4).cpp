#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,bl=0,ne=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            char c;
            cin >> c;
            if ((j&1)^(i&1)) ne+=c-'0';
            else bl+=c-'0';
        }
    cout << bl << '-' << ne << " = " << bl - ne << endl;
}

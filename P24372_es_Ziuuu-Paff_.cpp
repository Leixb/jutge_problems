#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    for(int i = 1; i < n; ++i) {
        if (i%4) cout << "Bam!,";
        else cout << "Ziuuu-Paff!,";
        if (i%5 == 0) cout << endl;
    }
    cout << "Ziuuu-Paff!" << endl;
}

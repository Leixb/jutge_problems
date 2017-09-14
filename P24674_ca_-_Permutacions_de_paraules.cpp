#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <string> v (n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(),v.end());
    do {
        cout << '(';
        for (int i=0; i < n; i++) {
            if (i!=0) cout << ',';
            cout << v[i];
        }
        cout << ')' << endl;
    } while (next_permutation(v.begin(),v.end())); 
}

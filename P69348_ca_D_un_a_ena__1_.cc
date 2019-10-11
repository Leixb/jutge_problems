#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> v (n);
    for (int i =0 ; i < n; i++) v[i]=i+1;
    do {
        cout << '(';
        for (int i = 0; i < n; i++) if (i!=0) cout << ',' << v[i]; else cout << v[i];
        cout << ')' << endl;
    } while (next_permutation(v.begin(),v.end())); 
}

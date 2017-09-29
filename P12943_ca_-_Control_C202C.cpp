#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> v (3,0);
    char mx_c='z';
    int mx = 0;
    while (n--) {
        char c;
        cin >> c;
        if(++v[c-'a']>mx or (v[c-'a']==mx and c < mx_c)) {
            mx_c = c;
            mx = v[c-'a'];
        }
    }
    cout << "majoria de " << mx_c << endl << mx << " repeticio(ns)" << endl;
}

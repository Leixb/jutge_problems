#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> v(n);
    while (n--) cin >> v[n];
    int c = 0;
    for (int i = 1; i < v.size(); i++) if (v[i]==v[0]) c++;
    cout << c << endl;
}


/*
int main () {
    map <int,int> m;
    int n,nu;
    cin >> n;
    while (n--) {
        cin >> nu;
        m[nu]++;
    }
    cout << m[nu]-1 << endl;
}
*/

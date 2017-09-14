#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <char> c (n);
    vector <char> v (n);
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> v[i];
    vector <vector <char> > C;
    vector <vector <char> > V;
    do C.push_back(c);
    while (next_permutation(c.begin(),c.end()));
    do V.push_back(v);
    while (next_permutation(v.begin(),v.end()));
    vector <string> r;
    for (size_t i = 0; i < C.size(); i++)
        for (size_t j = 0; j < V.size(); j++) {
            string s = "";
            for (int k = 0; k < n; k++) {
                s+=C[i][k]; s+= V[j][k];
            }
            r.push_back(s);
        }
    sort(r.begin(),r.end());
    for (size_t i = 0; i < r.size(); i++) cout << r[i] << endl;
}

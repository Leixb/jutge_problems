#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    map<pair <string, string>, int> M;
    while (n--) {
        string nen, joguina;
        cin >> nen >> joguina;
        ++M[{nen, joguina}];
    }
    for (auto entrada : M)
        cout << entrada.first.first << ' ' << entrada.first.second << ' ' << entrada.second << endl;
}

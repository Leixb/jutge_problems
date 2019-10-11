#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <string> paraules = {"", "a", "b"};
    map <string, int> m;
    m["a"] = 1, m["b"] = 2;

    string paraula = "";
    for (int n = 3; paraula.size() < 1000; ++n) {
        paraula = paraules[n-2] + paraules[n-1];
        paraules.push_back(paraula);
        m[paraula] = n;
    }
    string s;
    while (cin >> s) {
        int n = m[s];
        if (n==0) cout << s << " no es de Fibonacci" << endl;
        else cout << s << " es la paraula numero " << n << endl;
    }
}

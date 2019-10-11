#include <bits/stdc++.h>
using namespace std;

int concatenacio(int a, int b) {
    return stoi(to_string(a) + to_string(b));
}

int main () {
    int a,b;
    while (cin >> a >> b) cout << concatenacio(a,b) << endl;
}

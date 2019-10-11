#include <bits/stdc++.h>
using namespace std;

int intercalacio(int x, int y) {
    if (x < 10 and y < 10) return x*10 + y;
    return intercalacio(x/10, y/10)*100 + (x%10)*10 + y%10;
}

int main () {
    int a, b;
    while (cin >> a >> b) cout << intercalacio(a, b) << endl;
}

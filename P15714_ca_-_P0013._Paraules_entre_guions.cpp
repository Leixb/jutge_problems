#include <bits/stdc++.h>
using namespace std;

int main () {
    char c;
    int a=0,b=0,C=0,cont=0;
    while (cin >> c)
        if (c=='-' or c=='.') {
            if (cont == 0);
            else if (cont < 5) ++a;
            else if (cont <= 9) ++b;
            else ++C;
            cont = 0;
        } else ++cont;
    cout << a << ',' << b << ',' << C << endl;
}

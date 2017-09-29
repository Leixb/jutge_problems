#include <bits/stdc++.h>
using namespace std;

int main () {
    char c;
    cin >> c;
    if (c>='0' and c<='9') cout << "Numero" << endl;
    else if (c>='a' and c <='z') cout << "Lletra minuscula" << endl;
    else if (c>='A' and c <='Z') cout << "Lletra majuscula" << endl;
}

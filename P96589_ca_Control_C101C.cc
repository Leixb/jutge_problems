#include <bits/stdc++.h>
using namespace std;

int main () {
    char c;
    cin >> c;
    if (c>='0' and c<='9') cout << "digit" << endl;
    else if ((c>='A' and c<='Z') or (c>='a' and c <='z')) cout << "lletra" << endl;
    else cout << "res" << endl;
}

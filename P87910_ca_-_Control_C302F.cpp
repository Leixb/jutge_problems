#include <bits/stdc++.h>
using namespace std;

void morse (const char& c, int& n) {
    if (c=='a') {
        cout << ".-";
        n+=2;
    } else if (c=='e') {
        cout << ".";
        n+=1;
    } else if (c=='i') {
        cout << "..";
        n+=2;
    } else if (c=='o') {
        cout << "---";
        n+=3;
    } else if (c=='u') {
        cout << "..-";
        n+=3;
    }
}

int main () {
    int n, cont = 0;
    cin >> n;
    char c;
    while (cin >> c) {
        morse(c,cont);
        if (cont >= n) {
            cout << endl;
            cont=0;
        }
    }
    if (cont != 0) cout << endl;
    cout << "STOP" << endl;
}

#include <iostream>
using namespace std;

void partida () {
    char c = '$';
    string s;
    cin >> s;
    bool t = false;
    for (int i = 1; i < 10; i++) {
        c = s[s.size()-1];
        cin >> s;
        if (s[0]!=c and !t) {
            if (i%2==0) cout << 'B' << endl;
            else cout << 'A' << endl;
            t = true;
        }
    }
    if (!t) cout << '=' << endl;
}

int main () {
    int n;
    cin >> n;
    while (n--) partida();
}

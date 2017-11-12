#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    char c;
    string s;
    bool a = true;
    cin >> s;
    if (s.size()%2==0) {
        cout << 'B' << endl;
        return 1;
    } else c = s[s.size()/2];
    for (int i = 1; i < n*2; i++) {
        a^=1;
        cin >> s;
        if (c != s[s.size()/2] or s.size()%2==0) {
            if (a) cout << 'B' << endl;
            else cout << 'A' << endl;
            return 1;
        }
    }
    cout << '=' << endl;
}

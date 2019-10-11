#include <iostream>
#include <string>
using namespace std;

void write_rule(const string& s, int W) {
    if (W >= s.length()) {
        cout << s;
        write_rule(s, W-s.length());
    }
}

int main() {
    string s; int W;
    while (cin >> s >> W) {
        write_rule(s, W);
        cout << endl;
    }
}

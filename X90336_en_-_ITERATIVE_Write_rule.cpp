#include <iostream>
#include <string>
using namespace std;

void write_rule(const string& s, int W) {
    for (int i = 0; i < W/s.length(); ++i) cout << s;
}

int main() {
    string s; int W;
    while (cin >> s >> W) {
        write_rule(s, W);
        cout << endl;
    }
}


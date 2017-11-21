#include <bits/stdc++.h>
using namespace std;

int main () {
    const vector<string> v = {"   #*# #*#   ", "  #*#*#*#*#  ", " #*# #*# #*# ", "#*#   #   #*#", "*#         #*"};
    char b, n;
    cin >> b >> n;
    bool first = true;
    for (char c; cin >> c;) {
        if (!first) cout << "---" << endl;
        else first = false;
        bool negrita = (c == 'B' or c == 'W');
        bool walker = c == 'w' or c == 'W';
        for (size_t i = 0, k; i < v.size(); ++i) {
            if (walker) k = v.size()-1-i;
            else k = i;
            for (size_t j = 0; j < v[0].size(); ++j) {
                if (v[k][j] == '*' or (v[k][j]=='#' and negrita)) cout << n;
                else cout << b;
            }
            cout << endl;
        }
    }
}

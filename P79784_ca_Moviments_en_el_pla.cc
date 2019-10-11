#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (auto c : s)
        if (c == 'n') --y;
        else if (c == 's') ++y;
        else if (c == 'e') ++x;
        else --x;
    cout << '(' << x << ", " << y << ')' << endl;
}

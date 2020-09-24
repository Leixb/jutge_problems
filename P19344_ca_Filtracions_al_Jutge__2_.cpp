#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
    char c;
    const vector<int> v = {11, 0, 17, 6, 12, 1, 3, 3, 11, 0, 0, 6, 3, 13, 6, 1, 0, 7, 6, 10, 5, 5, 1, 0, 0, 1};
    while (cin >> c)
        if (c >= 'a' and c <= 'z')
            cout << v[c - 'a'] << endl;
        else cout << 0 << endl;
}

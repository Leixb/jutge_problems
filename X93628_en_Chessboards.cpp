#include <iostream>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cout << (((j&1)^(i&1))? 'x' : '.');
            cout << endl;
        }
        cout << endl;
    }
}

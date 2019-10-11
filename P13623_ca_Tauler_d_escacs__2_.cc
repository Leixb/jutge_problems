#include <iostream>
using namespace std;

int main () {
	int f,c;
    cin >> f >> c;
    char ch;
    int res = 0;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cin >> ch;
            if (i%2==j%2) res += (int)ch-'0';
        }
    }
    cout << res << endl;
}
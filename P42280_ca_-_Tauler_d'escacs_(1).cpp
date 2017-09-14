#include <iostream>
using namespace std;

int main () {
	int f,c;
    cin >> f >> c;
    char ch;
    int res = 0;
    for (int i = 0; i < f*c; i++) {
        cin >> ch;
        res += (int)ch-'0';
    }
    cout << res << endl;
}

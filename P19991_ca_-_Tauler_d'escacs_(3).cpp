#include <iostream>
using namespace std;

int main () {
	int n;
    char ch;
    int res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ch;
            if (i==j or i+j==n-1) res += (int)ch-'0';
        }
    }
    cout << res << endl;
}

/*
 * 1 2 3 30
 * 5 6 21 8
 * 9 12 B C
 * 03 E F 0
 * 
 * 
 */

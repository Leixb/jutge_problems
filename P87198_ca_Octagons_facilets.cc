#include <iostream>
using namespace std;

void rep(int n, char c) {
    for (int i = 0; i < n; i++) cout << c;
}

int main () {
	int n;
    while (cin >> n) {
        int c = n;
        for (int i = n-1; i > 0; i--) {
            rep(i,' ');
            rep(c,'X');
            cout << endl;
            c+=2;
        }
        for (int i = 0; i < n; i++) {
            rep(c,'X');
            cout << endl;
        }
        for (int i = 1; i < n; i++) {
            c-=2;
            rep(i,' ');
            rep(c,'X');
            cout << endl;
            
        }
        cout << endl;
    }
}

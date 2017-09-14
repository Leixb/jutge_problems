#include <iostream>
using namespace std;

int main () {
	int n;
    bool primer = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (!primer) cout << endl;
        else primer = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << (i*n+j)%10;
            cout << endl;
        }
    }
}

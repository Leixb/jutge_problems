#include <iostream>
using namespace std;

int main () {
    long long n;
    int p = 0;
    while (cin >> n) {
        p++;
        if (n%2==0) {
            cout << p << endl;
            break;
        }
    }
}

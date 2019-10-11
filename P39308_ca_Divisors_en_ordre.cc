#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        string s = "";
        cout << "divisors de " << n <<": ";
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        for (int i = 1; i < sqrt(n); i++) {
            if (n%i==0) {
                cout << i << ' ';
                s = to_string(n/i) + " " + s;
            }
        }
        if (floor(sqrt(n)) == ceil(sqrt(n))) cout << int(sqrt(n)) << ' ';
        s[s.size()-1]='\n';
        cout << s;
    }
}

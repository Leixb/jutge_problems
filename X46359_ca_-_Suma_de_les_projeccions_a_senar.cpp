#include <iostream>
using namespace std;

int extract_odd_digits(int x) {
    int res = 0, ln=1;
    for (; x > 0; x /= 10) {
        const int d = x%10;
        if (d%2) {
            res = res + d*ln;
            ln *= 10;
        }
    }
    return res;
}

int main() {
    int N;
    int suma = 0;
    while (cin >> N) {
        suma += extract_odd_digits(N);
    }
    cout << suma << endl;
}

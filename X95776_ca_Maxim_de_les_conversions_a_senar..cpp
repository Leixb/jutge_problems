#include <iostream>
using namespace std;

int convert_to_odd_digits(int x) {
    int r = 0;
    for (int i = 1; x > 0; i *= 10, x /=10) r += (x%10 + (x%2 == 0))*i;
    return r;
}

int main() {
    int n;
    int max = 0;
    while (cin >> n) {
        int v = convert_to_odd_digits(n);
        if (v > max) max = v;
    }
    cout << max << endl;
}

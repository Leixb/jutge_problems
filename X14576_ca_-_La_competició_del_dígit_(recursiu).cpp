#include<iostream>
using namespace std;

int digit_comp(int d, int x, int y) {
    if (!x and !y) return 0;

    int res = (d == x%10) + 2*(d == y%10);

    if (res) return res%3;

    return digit_comp(d, x/10, y/10);
}

int main() {
    int d, x, y;
    while (cin >> d >> x >> y) {
        cout << digit_comp(d, x, y) << endl;
    }
}


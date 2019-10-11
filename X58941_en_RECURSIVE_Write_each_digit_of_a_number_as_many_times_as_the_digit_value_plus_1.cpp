#include <iostream>
using namespace std;

// Pre: 0<=d<=9 and 0<=x.
void write_digit(int d,int x) {
    // insert here your (RECURSIVE) code
    if (x <= 0) return;
    cout << d;
    write_digit(d, x-1);
}

// Pre: 0<n.
void write_expanded(int n) {
    if (n) {
        write_expanded(n/10);
        write_digit(n%10, n%10+1);
    }
}

int main() {
    int n;
    while (cin >> n) {
        write_expanded(n);
        cout << endl;
    }
}

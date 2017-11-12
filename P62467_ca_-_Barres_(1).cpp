#include <iostream>
using namespace std;

void bar (int n) {
    if (n == 1) cout << '*' << endl;
    else {
        bar(n-1);
        cout << string(n, '*') << endl;
        bar(n-1);
    }
}

int main () {
    int n;
    cin >> n;
    bar(n);
}

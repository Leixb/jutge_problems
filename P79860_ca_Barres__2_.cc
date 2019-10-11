#include <iostream>
using namespace std;

void bar (int n) {
    if (n == 1) cout << '*' << endl;
    else {
        for (int i = 0; i < n; i++) cout << '*';
        cout << endl;
        bar(n-1);
        bar(n-1);
    }
}

int main () {
    int n;
    cin >> n;
    bar(n);
}

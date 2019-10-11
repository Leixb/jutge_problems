#include <iostream>
using namespace std;

void recurs (int m, int n=0, string o="") {
    if (n==m) {
        o.erase(o.end()-1);
        cout << o << endl;
    } else {
        recurs(m,n+1,o+"0 ");
        recurs(m,n+1,o+"1 ");
    }
}

int main () {
    int n;
    cin >> n;
    recurs(n);
}

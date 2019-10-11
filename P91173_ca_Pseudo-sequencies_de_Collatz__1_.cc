#include <iostream>
#include <map>
using namespace std;

size_t x,y;
map <size_t,int> m;

int collatz (size_t n, int c=1) {
    if (n>int(10e5)) return n;
    if (m[n]!=0) return c-m[n];
    m[n]=c;
    if (n%2==0) return collatz(n/2+x,c+1);
    return collatz(n*3+y,c+1);
}

int main () {
    int n;
    while (cin >> x >> y >> n) {
        cout << collatz(n) << endl;
        m.clear();
    }
}

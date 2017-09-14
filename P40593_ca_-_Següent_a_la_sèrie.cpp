#include <iostream>
#include <cmath>
using namespace std;

int main () {
    long n;
    while (cin >> n) {
        long m = ceil((sqrt(1+8*n)-1)/2);
        cout << (m)*(m+1)/2 << endl;
    } 
}


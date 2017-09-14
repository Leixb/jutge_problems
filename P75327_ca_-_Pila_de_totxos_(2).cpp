#include <iostream>
#include <cmath>
using namespace std;

#define ulint unsigned long long

int main () {
    ulint n;
    cin >> n;
    ulint c = -n*2;
    cout << long((-1+sqrt(1*1-4*1*c))/(2*1)) << endl;
}

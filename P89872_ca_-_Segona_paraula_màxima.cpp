#include <iostream>
#include <string>
using namespace std;

int main () {
    string in, a="_",b=a;
    while (cin >> in) {
        if (in > b and in != a) b = in;
        if (a < b) swap(a,b);
    }
    cout << b << endl;
}

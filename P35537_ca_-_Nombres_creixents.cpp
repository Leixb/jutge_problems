#include <iostream>
using namespace std;

bool es_creixent(int n) {
    if (n <= 9) return true;
    return (n%10 >= (n%100)/10) and es_creixent(n/10);
}

int main () {
    int n;
    while (cin >> n) {
        if (es_creixent(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}

#include <iostream>
#include <vector>
using namespace std;

int transverse(int nivell, const int &p) {
    int node, fills, suma = 0;
    cin >> node >> fills;
    while (fills--) suma += transverse(nivell + 1, p);
    if (nivell == p) suma += node;
    return suma;
}

int main(int argc, char *argv[]) {
    int p;
    cin >> p;
    cout << transverse(1, p) << endl;
}

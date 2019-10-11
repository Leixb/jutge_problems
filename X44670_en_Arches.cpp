#include <iostream>

using namespace std;

// Add here other function definitions if you need them.

// Read problem statement.
int count_initial_arches() {
    int cont=0;

    int act, prev;
    cin >> prev;

    if (prev != 0) return 0;

    while (cin >> act and act >= 0 and (act == prev or act == prev+1 or act+1 == prev)) {
        if (act == 0) ++cont;
        prev = act;
    }

    return cont;
}

int main() {
    cout << count_initial_arches() << endl;
}


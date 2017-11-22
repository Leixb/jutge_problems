#include <iostream>
using namespace std;

int main () {
    const string referencia = "TRWAGMYFPDXBNJZSQVHLCKE";
    for (string dni; cin >> dni;) {
        int n = 0;
        for (const auto& num : dni) if (num != 'X') n = n*10 + (num - '0');
        cout << referencia[n%23] << endl;
    }
}

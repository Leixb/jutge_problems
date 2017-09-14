#include <iostream>
using namespace std;

int main () {
    string dni;
    char refe[23] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
    while (cin >> dni) {
        int n = 0;
        for (auto it = dni.begin(); it != dni.end(); it++) if (*it!='X') n = n*10 + (*it-'0');
        for (int i = dni.size(); i < 8; i++ ) cout << 0;
        cout << dni << '-' << refe[n%23] << endl;
    }
}

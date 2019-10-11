#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    if (t > 30) cout << "fa calor" << endl;
    else if (t < 10) cout << "fa fred" << endl;
    else cout << "s'esta be" << endl;
    if (t >= 100) cout << "l'aigua bulliria" << endl;
    else if (t <= 0) cout << "l'aigua es gelaria" << endl;
}
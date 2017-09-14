#include <iostream>
using namespace std;

int main () {
    int eur, cent;
    cin >> eur >> cent;
    int monedes[] = {1, 2, 5, 10, 20, 50};
    int billets[] = {5, 10, 20, 50, 100, 200, 500};
    int cont = 7;
    int cont2 = 0;
    while (cont--) {
        cout << "Bitllets de " << billets[cont] << " euros: " << eur/billets[cont] << endl;
        if (eur >= billets[cont]) eur%=billets[cont];
    }
    cout << "Monedes de " << 2 << " euros: " << eur/2 << endl;
    if (eur >= 2) eur %= 2;
    cout << "Monedes de " << 1 << " euro: " << eur << endl;
    cont = 6;
    while (cont--) {
        if (cont != 0) cout << "Monedes de " << monedes[cont] << " centims: " << cent/monedes[cont] << endl;
        else cout << "Monedes de " << monedes[cont] << " centim: " << cent/monedes[cont] << endl;
        if (cent >= monedes[cont]) cent%=monedes[cont];
    }
}

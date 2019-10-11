#include <bits/stdc++.h>
using namespace std;

string dia_de_la_setmana(int d, int m, int a) {
    m -= 2;
    if (m<=0) {
        m+=12;
        a--;
    }
    int c = a/100, y = a-c*100;
    int f = floor(2.6*m - 0.2) + d + y + floor(y/4) + floor(c/4) - 2*c;
    f %= 7;
    if (f < 0) f += 7;
    vector <string> dies = {"Diumenge", "Dilluns", "Dimarts", "Dimecres", "Dijous", "Divendres", "Dissabte"};
    return dies[f];
}

bool es_any_de_traspas(int any) {
    if (any%100 == 0) return any%400 == 0;
    return any%4 == 0;
}

bool es_data_valida(int dia, int mes, int any) {
    if (dia >= 32 or dia <= 0) return false;
    if (mes > 12 or mes < 1) return false;
    if (mes == 2 and dia == 29) return es_any_de_traspas(any);
    if (mes == 2 and dia > 28) return false;
    if (mes == 4 or mes == 6 or mes == 9 or mes == 11) return dia <= 30;
    return true;
}

int main () {
    int d,m,a;
    while (cin >> d >> m >> a)
        if (es_data_valida(d, m, a)) cout << dia_de_la_setmana(d, m, a) << endl;
        else cout << "Data Incorrecta" << endl;
}

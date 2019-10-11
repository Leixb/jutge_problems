#include <iostream>
#include <vector>
using namespace std;

int posicio_maxim(const vector<double>& v, int m) {
    double max = v[0];
    int  p = 0;
    for (int i = 0; i <= m; i++) {
        if (v[i] > max) {
            max = v[i];
            p = i;
        }
    }
    return p;
}

void ordena_per_seleccio(vector<double>& v, int m) {
    if (m==-1) return;
    int p = posicio_maxim(v,m);
    swap(v[p],v[m]);
    if (m) ordena_per_seleccio(v,m-1);
}

int main () {}

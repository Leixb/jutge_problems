#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
    int p = (esq+dre)/2;
    if (esq > dre) return -1;
    if (v[p]==x) return p;
    else if (v[p] > x) return posicio(x,v,esq,p-1);
    else return posicio(x,v,p+1,dre);
}

int main () {
    vector <double> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double m;
        cin >> m;
        v.push_back(m);
    }
    double m;
    cin >> m;
    cout << posicio(m,v,0,n-1) << endl;
}

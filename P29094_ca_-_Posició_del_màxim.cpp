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

int main () {
    int n;
    cin >> n;
    vector <double> v (n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << posicio_maxim(v,v.size()-1);
}

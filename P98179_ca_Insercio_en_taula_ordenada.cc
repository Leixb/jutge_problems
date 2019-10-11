#include <iostream>
#include <vector>
using namespace std;

void insereix(vector<double>& v) {
#define vz v.size()-1
#define x v[vz]
    int L=0,R=vz-1;
    while (L <= R) {
        int M = (L+R)/2;
        if (v[M]==x) {
            v.insert(v.begin()+M,x);
            return;
        } else if (v[M]<x) L=M+1;
        else R=M-1;
    }
    v.insert(v.begin()+L,x);
    v.erase(v.begin()+vz);
}

int main () {
    int n;
    while (cin >> n) {
        vector <double> v (n);
        for (int i = 0; i < n; i++) cin >> v[i];
        insereix(v);
        for (int i = 0; i < n; i++) cout << v[i] << ' ';
    }
}

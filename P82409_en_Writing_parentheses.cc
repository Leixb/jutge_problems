#include <iostream>
#include <vector>
using namespace std;

#define lint long long

vector <vector <lint> > v;

lint tart (int n, int k) {
    if (v[n][k]!=-1) return v[n][k];
    v[n][k]= tart(n-1,k-1)+tart(n-1,k);
    v[n][n-k]=v[n][k];
    return v[n][k];
}

int main () {
    int n=66;
    v.resize(n+1, vector <lint> (1,1));
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < i; j++) v[i].push_back(-1);
        v[i].push_back(1);
    }
    while (cin >> n) {
        if (n%2) {cout << 0 << endl; continue;}
        n/=2;
        cout << tart(2*n,n)/(n+1) << endl;
    }
}

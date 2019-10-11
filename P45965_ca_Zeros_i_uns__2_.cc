#include <iostream>
#include <vector>
using namespace std;

void proc (int z, int u, vector <bool> v = vector <bool> () ) {
    if (z+u==0) {
        cout << v[0];
        for (int i = 1; i < v.size(); i++) cout << ' ' << v[i];
        cout << endl;
        return;
    }
    v.push_back(0);
    if (z>0) {
        v[v.size()-1]=0;
        proc(z-1,u,v);
    }
    if (u>0) {
        v[v.size()-1]=1;
        proc(z,u-1,v);
    }
}

int main () {
    int z,u;
    cin >> z >> u;
    z -= u;
    proc(z,u);
}

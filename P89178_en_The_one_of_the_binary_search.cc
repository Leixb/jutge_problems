#include <iostream>
#include <vector>
using namespace std;

struct par {
    int d, w;
};

int costinf (int v, int w, int d) {
    return (500 + (v+w)/10 + (v+w)*(v+w)/100000)*d;
}

int cost (vector <par>& V, int v) {
    int res = 0;
    for (auto it = V.begin(); it != V.end(); it++) res += costinf(v,(*it).w, (*it).d);
    return res;
}

int bin (vector <par>& V, int C) {
    int L = 1, R = 30000;
    while (L < R - 1) {
        int M = (R+L)/2;
        if (C < cost(V,M)) R = M;
        else L = M;
    }
    return L;
}

int main () {
    int C, n;
    while(cin >> C) {
        cin >> n;
        vector <par> V (n);
        for (int i = 0; i < V.size(); i++) cin >> V[i].d >> V[i].w;
        cout << bin(V,C) << endl;
    }
}

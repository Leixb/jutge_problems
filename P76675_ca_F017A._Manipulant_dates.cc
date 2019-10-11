#include <bits/stdc++.h>
using namespace std;

struct Data {
    int dia, mes, any;
};

int compara(const Data& a, const Data& b) {
    return a.any*12*31+a.mes*31+a.dia - (b.any*12*31+b.mes*31+b.dia);
}

Data data_llegida() {
    char c;
    Data d;
    cin >> d.dia >> c >> d.mes >> c >> d.any;
    return d;
}

int find(const vector<Data>& v, const Data& d) {
    int L = 0, R = v.size();

    while (L <= R) {
        int M = (L+R)/2;
        int comp = compara(v[M], d);
        if (comp == 0) return M;
        else if (comp < 0) L = M+1;
        else R = M-1;
    }

    return L;
}

int main () {
    vector<Data> v;
    for (char ordre; cin >> ordre;) {
        if (ordre == 'A') {
            v.push_back(data_llegida());
        } else if (ordre == 'E') {
            v.pop_back();
        } else {
            int res = find(v, data_llegida()) - find(v, data_llegida());
            cout << -res << endl;
        }
    }
}

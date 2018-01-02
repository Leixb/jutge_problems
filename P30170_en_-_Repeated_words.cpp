#include <bits/stdc++.h>
using namespace std;

int cont;

struct word{
    string s;
    int id;
    word(string s): s(s) {
        id = cont++;
    }
};

bool find (const vector<word>& v, const string& s, int &pos) {
    int L=0, R=v.size()-1;
    while(L <= R) {
        pos = (L+R)/2;
        if (v[pos].s == s) return true;
        else if (v[pos].s > s) R = pos-1;
        else L = pos+1;
    }
    pos = L;
    return false;
};

int main () {
    for (int n; cin >> n;) {
        cont = 0;
        vector<word> v;
        vector<int> cont(n, 0);
        for (int i = 0; i < n; ++i) {
            int pos;
            string s;
            cin >> s;
            if (find(v, s, pos)) ++cont[v[pos].id];
            else v.insert(v.begin()+pos, word(s));
        }
        vector<int> cont2(n, 0);

        for (size_t i = 0; i < v.size(); ++i) {
            cont2[
                cont[v[i].id]
            ] += v[i].s.length();
        }

        for (int i = 0; i < n; ++i) {
            if (cont2[i]) cout << i+1 << " : " << cont2[i] << endl;
        }
        cout << endl;
    }
}

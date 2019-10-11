#include <bits/stdc++.h>
using namespace std;

struct Node {
    int pare, esq, dre;
    string label;

    Node(int pare, string label, int esq=-1, int dre=-1):
        pare(pare), esq(esq), dre(dre), label(label) {
        }
};

void input (int pare, vector <Node>& v) {
    string esq;
    cin >> esq;
    if (esq != "-1") {
        v.push_back(Node(pare, esq));
        v[pare].esq = v.size()-1;
        input(v[pare].esq, v);
    }
    string dre;
    cin >> dre;
    if (dre != "-1") {
        v.push_back(Node(pare, dre));
        v[pare].dre = v.size()-1;
        input(v[pare].dre, v);
    }
}

int main () {
    int n;
    cin >> n;
    string label;
    cin >> label;
    // Arbre en postordre
    vector <Node> v (1, Node(-1, label));
    input(0,v);

    string dir;
    int pos = 0;
    cout << v[pos].label << endl;
    while (cin >> dir) {
        int o_pos = pos;
        if (dir == "amunt") pos = v[pos].pare;
        else if (dir == "esquerra") pos = v[pos].esq;
        else pos = v[pos].dre;

        if (pos == -1) pos = o_pos;
        cout << v[pos].label << endl;
    }
}

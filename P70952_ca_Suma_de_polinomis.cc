#include <iostream>
#include <vector> 
using namespace std; 

struct Parell {
    int coef, expo;
};

typedef vector<Parell> Polinomi;

Polinomi suma(const Polinomi& p, const Polinomi& q) {
    Polinomi res;

    size_t i=0, j=0;

    while (i < p.size())
        if (j < q.size()) {
            if (p[i].expo == q[j].expo) {
                const int coef = p[i].coef + q[j].coef; 
                if (coef) res.push_back({coef, p[i].expo});
                ++i, ++j;
            } else if (p[i].expo < q[j].expo) res.push_back(p[i++]);
            else res.push_back(q[j++]);
        } else res.push_back(p[i++]);

    while (j < q.size()) res.push_back(q[j++]);

    return res;
}

void llegeix(Polinomi& p) {
    int n;
    cin >> n;
    p = Polinomi(n);
    char c;
    for (int i = 0; i < n; ++i) cin >> p[i].coef >> c >> p[i].expo;
}

void escriu(const Polinomi& p) {
    int n = p.size();
    cout << n;
    for (int i = 0; i < n; ++i) cout << " " << p[i].coef << ":" << p[i].expo;
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        Polinomi p, q;
        llegeix(p);
        llegeix(q);
        Polinomi r = suma(p, q);
        escriu(r); 
    }
}

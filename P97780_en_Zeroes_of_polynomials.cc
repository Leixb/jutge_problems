#include <bits/stdc++.h>
using namespace std;

inline double eval_poly(const vector<double>& coef, const double& x) {
    double res = 0;
    for (size_t i = coef.size()-1; i < coef.size(); --i)
        res = res*x + coef[i];
    return res;
}

class Pol {
    vector<double> coef;
    public:
    Pol (vector<double>& coef): coef(coef) {}

    double operator() (const double &x) const {
        return eval_poly(coef, x);
    }
};

double arrel(double (*f)(double), double a=0, double b=1, const double& epsilon=1e-5) {
    while(b - a > epsilon) {

        double c = (b+a)/2;

        if ((*f)(a)*(*f)(b) > 0) a = c;
        else b = c;

    }

    return a;
}

double arrel(const Pol& P, double a=0, double b=1, const double& epsilon=1e-5) {
    while(b - a > epsilon) {

        double c = (b+a)/2;

        if (P(a)*P(c) <= 0) b = c;
        else a = c;

    }

    a = epsilon*floor(a/epsilon)-epsilon;

    while (P(a)*P(a+epsilon) >= 0) a += epsilon;
    return a;

}

int main () {
    cout.setf(ios::fixed);
    cout.precision(5);

    string s;
    for (int cont=1; getline(cin, s); ++cont) {
        vector<double> v(5, 0);
        istringstream S (s);
        int c;
        double val;
        while (S >> val >> c) v[c] = val;

        cout << "Case " << cont << ": zero at " << arrel(Pol(v)) << '.' << endl;
    }
}

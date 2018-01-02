#include <iostream>
#include <vector>
using namespace std;

struct interval {
    double a, b;
};
typedef vector<interval> set_of_intervals;

// reads n intervals from cin, given as a0 b0 a1 b1 ... 
// see the sample inputs
set_of_intervals read_intervals(int n) {
    set_of_intervals I(n);
    for (int i = 0; i < n; ++i) cin >> I[i].a >> I[i].b;
    return I;
}

bool inside_some_interval(double x, const set_of_intervals &I) {
    for (const auto &inter : I) if ( x >= inter.a and x <= inter.b ) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    set_of_intervals I = read_intervals(n);
    int m;
    cin >> m;
    for (int i = 0 ; i < m ; ++i) {
        double x; cin >> x;
        if (inside_some_interval(x, I))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}

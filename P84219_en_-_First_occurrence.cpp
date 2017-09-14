#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int first_occurrence(double x, const vector<double>& v) {
    int L = 0, R = v.size()-1;
    while (L<=R) {
        int M = (L+R)/2;
        if (v[M]==x and v[M-1]!=x) return M; 
        else if (v[M] < x) L = M+1;
        else  R = M-1;
    }
    return -1;
}

int main () {
    vector <double> vv;
    int s;
    cin >> s;
    vv.resize(s);
    for (int i = 0; i < s; i++) cin >> vv[i];
    double xx;
    cin >> xx;
    cout << first_occurrence(xx,vv) << endl;
}

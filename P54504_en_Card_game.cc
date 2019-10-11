#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector <int> d;
vector <int> s {14,8,5,1};
const int l = numeric_limits<int>::max();

int din (int n) {
    if (n<0) return l;
    if (d[n]!=l) return d[n];
    for (size_t i = 0; i < s.size(); ++i) {
        int r=din(n-s[i]);
        if (r!=l) d[n]=min(r,d[n]);
    }
    d[n]++;
    return d[n];
}

int main () {
    int n;
    d.resize(500001,l);
    d[0]=0;
    while (cin >> n and n!=-1) cout << din(n) << endl;
}

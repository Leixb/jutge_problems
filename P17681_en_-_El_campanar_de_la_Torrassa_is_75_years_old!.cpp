#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;  // limit for array size
int n;  // array size
double t[2 * N];

void build() {  // build the tree
    for (int i = n - 1; i > 0; --i) t[i] = max(t[i<<1], t[i<<1|1]);
}

double query(int l, int r) {  // sum on interval [l, r)
    double res = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l&1) res = max(t[l++], res);
        if (r&1) res = max(t[--r], res);
    }
    return res;
}

const double PI = acos(-1);

struct coord {
    double x, y;
};


double dist (const coord& a, const coord& b) {
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

double area (const int& t) {
    const int s = t%60,
        m = (t/60)%60,
        h = (t/3600);
    const double ah = h*PI/6,
           am = m*PI/30,
           as = s*PI/30;
    const coord ph = {cos(ah)*3, sin(ah)*3},
          pm = {cos(am)*4, sin(am)*4},
          ps = {cos(as)*5, sin(as)*5};
    const double a = dist(ph, pm),
           b = dist(ph, ps),
           c = dist(pm, ps);
    const double S = (a + b + c)/2;
    return sqrt(S*(S-a)*(S-b)*(S-c));
}

int main () {
    n = 60*60*12;
    for (int i = 0; i < n; ++i) t[n + i] = area(i);
    build();
    char C;
    cout << fixed << setprecision(3);
    int h1, m1, s1, h2, m2, s2;
    while (cin >> h1 >> C >>  m1 >> C >>  s1 >>  h2 >> C >>  m2 >> C >>  s2) {
        int t1 = (h1*60+m1)*60 + s1,
            t2 = (h2*60+m2)*60 + s2;
        cout << query(t1, t2+1) << endl;
    }
}

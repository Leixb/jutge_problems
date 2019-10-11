#include <bits/stdc++.h>
using namespace std;

template<typename T>
class segTree {
    std::vector<T> t;

    T (*func)(T, T);
    int N;

    public:

    segTree(const std::vector<T>& leaves, T (*op)(T, T)): func(op), N(leaves.size()) {
        t = std::vector<T> (N);
        t.insert(t.end(), leaves.begin(), leaves.end());

        for (int i = N - 1; i > 0; --i) t[i] = func(t[i<<1] , t[i<<1|1]);
    }

    void modify(size_t p, const T& value) {
        for (t[p += N] = value; p > 1; p >>= 1) t[p>>1] = func(t[p], t[p^1]);
    }

    T query(int l, int r) {  // sum on interval [l, r)
        T res;
        bool first = true;
        for (l += N, r += N; l < r; l >>= 1, r >>= 1) {
            if (l&1) {
                if (first) res = t[l++], first=false;
                else res = func(res, t[l++]);
            }
            if (r&1) {
                if (first) res = t[--r], first=false;
                else res = func(res, t[--r]);
            }
        }
        return res;
    }
};



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

double maxim(double a, double b) {
    return max(a, b);
}

int main () {
    const int n = 60*60*12;

    vector<double> leaves(n);
    for (int i = 0; i < n; ++i) leaves[i] = area(i);

    segTree<double> ST (leaves, maxim);

    char C;

    cout << fixed << setprecision(3);
    int h1, m1, s1, h2, m2, s2;
    while (cin >> h1 >> C >>  m1 >> C >>  s1 >>  h2 >> C >>  m2 >> C >>  s2) {
        int t1 = (h1*60+m1)*60 + s1,
            t2 = (h2*60+m2)*60 + s2;
        cout << ST.query(t1, t2+1) << endl;
    }
}

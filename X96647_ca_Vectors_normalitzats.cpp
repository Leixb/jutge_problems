#include <bits/stdc++.h>
using namespace std;

struct Punt {
    double x,y;
};

bool baricentre (const vector<Punt>& v, Punt& b) {
    b.x = b.y = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        b.x += v[i].x;
        b.y += v[i].y;
    }
    b.x /= v.size();
    b.y /= v.size();
    for (size_t i = 0; i < v.size(); ++i)
        if (v[i].x == b.x and v[i].y == b.y) return true;
    return false;
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    while (cin >> n) {
        Punt f;
        bool diff = false;
        vector <Punt> v;
        Punt sum;
        sum.x = sum.y = 0;
        for (int i = 0; i < n; ++i) {
            Punt p;
            cin >> p.x >> p.y;
            sum.x += p.x;
            sum.y += p.y;
            if (i == 0) f = p;
            else if (p.x != f.x or p.y != f.y) diff = true;
            v.push_back(p);
        }
        Punt b;
        bool prop3 = not baricentre(v, b);
        cout << "baricentre: (" << b.x << ',' << b.y << ')' << endl;
        if (not diff) cout << "el vector no compleix la propietat 1" << endl;
        else if (sum.x != sum.y) cout << "el vector no compleix la propietat 2" << endl;
        else if (not prop3) cout << "el vector no compleix la propietat 3" << endl;
        else cout << "vector normalitzat" << endl;
    }
}

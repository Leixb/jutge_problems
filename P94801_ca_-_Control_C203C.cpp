#include <bits/stdc++.h>
using namespace std;

bool es_triangle_rectangle(int a, int b, int c) {
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    return b*b + a*a == c*c;
}

int main () {
    int a, b, c, cnt=0;
    cin >> a >> b;
    while (cin >> c) {
        if (es_triangle_rectangle(a, b, c)) ++cnt;
        a = b;
        b = c;
    }
    cout << cnt << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main () {
    int h,m,t;
    string s;
    while (cin >> h >> m >> t) {
        int cont = 0;
        if (t>720) {
            cont += 11*int(t/720);
            t %= 720;
        }
        h%=12;
        while (t>0) {
            if (m*11 <= 60*h and 11*(m+t) > 60*h) ++cont;
            t -= 60-m;
            m = 0;
            h++;
            if (h==12) {
                h = 1;
                t-=60;
            }
        }
        cout << cont << endl;
    }
}

/*

m == h*60/12 + (m/60)*60/12

12 * m == h*60 + m
11 * m == h*60


 */

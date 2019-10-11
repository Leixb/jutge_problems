#include <bits/stdc++.h>
using namespace std;

int main () {
    int h,m,t;
    while (cin >> h >> m >> t) {
        int cont = 0;
        if (t>1440) {
            cont += 484*int(t/1440);
            t %= 1440;
        }
        while (t>0) {
            if (m==0) {
                cont+=4;
                if (h == 0) cont += 12;
                else if (h < 12) cont += h;
                else if (h==12) cont+=100;
                else cont += h-12;
            }
            if (m<=15 and t>15-m) cont+=1;
            if (m<=30 and t>30-m) cont+=2;
            if (m<=45 and t>45-m) cont+=3;
            t -= 60-m;
            m = 0;
            ++h;
            if (h==24) h = 0;
        }
        cout << cont << endl;
    }
}

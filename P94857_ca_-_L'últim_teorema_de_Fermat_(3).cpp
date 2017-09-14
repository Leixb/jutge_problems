#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main () {
    int a,b,c,d;
    while (cin >> a >> b >> c >> d) {
        int cnt=0;
        for (int x = a; x <= b; x++) {
            for (int y = c; y <= d; y++) {
                double zz = x*x+y*y;
                int sq = sqrt(zz);
                if (sq*sq==zz) {
                    cnt++;
                }

            }
        }
        cout << cnt << endl;
    }
}

#include <iostream>
using namespace std;

int main () {
    int y,d,h,m,s;
    unsigned long long r = 0;
    cin >> y >> d >> h >> m >> s;
    r = s + 60*(m + 60*(h+24*(d+365*y)));
    cout << r << endl;
}

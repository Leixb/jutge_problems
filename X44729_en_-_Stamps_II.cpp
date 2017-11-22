#include <bits/stdc++.h>
using namespace std;

struct Stamps {
    int stamp7;
    int stamp4;
};

Stamps min_stamps(int n) {

    if (n%7 == 0) return {n/7, 0};

    Stamps taking_4 = min_stamps(n-4);
    ++taking_4.stamp4;

    return taking_4;
}

int main () {
    int n;
    while (cin >> n) {
        Stamps shit = min_stamps(n);
        cout << shit.stamp7 << ' ' << shit.stamp4 << endl;
    }
}

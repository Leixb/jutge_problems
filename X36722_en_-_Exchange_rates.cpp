#include <bits/stdc++.h>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double rate, value, euros=0;
    cin >> rate;
    string coin;
    while (cin >> value >> coin)
        if (coin == "USD") euros+=value/rate;
        else euros+=value;
    cout << euros << ' ' << euros*rate << endl;
}

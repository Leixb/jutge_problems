#include <bits/stdc++.h>
using namespace std;

bool es_narcicista(int n) {
    int k = to_string(n).size(), sum = 0, N = n;
    while (n > 0) {
        sum += pow(n%10,k);
        n/=10;
    }
    return N == sum;
}

int main () {
    int n;
    while (cin >> n) 
        if (not es_narcicista(n)) {
            cout << "NO" << endl;
            return 0;
        }
    cout << "SI" << endl;
}

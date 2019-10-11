#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Post: Returns a vector v of 151 positions (0 to 150), where:
//    v[i] is true if 'i' is a prime number, 
//    v[i] is false otherwise
vector<bool> precompute_primes() {
    vector<bool> v (151, true);
    v[0]=v[1]=false;
    for (int i = 2; i <= 12; ++i)
        if (v[i])
            for (int j = 2*i; j < 151; j += i) v[j] = false;
    return v;
}

int main() {

    const vector<bool> primer = precompute_primes();

    bool first = true;

    string ciutat;
    int n;
    while (cin >> ciutat >> n) {

        if (!first) cout << endl;
        first = false;

        cout << ciutat << endl;

        for (int i = 0; i < n; ++i) {
            string nom;
            int edat;
            cin >> nom >> edat;

            if (nom[0] == ciutat[0] and primer[edat]) cout << nom << ' ' << edat << endl;
        }
    }
}

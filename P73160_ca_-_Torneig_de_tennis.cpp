#include <bits/stdc++.h>
using namespace std;

string guanyador(const vector<string>& nom, const vector<bool>& guanya) {
    size_t p = 1;
    for (;p <= guanya.size();)
        if (guanya[p-1]) p*=2;
        else p = p*2+1;
    return nom[p - guanya.size()-1];
}

int main () {}

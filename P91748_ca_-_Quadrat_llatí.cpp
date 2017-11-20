#include <bits/stdc++.h>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Quadrat;

bool es_llati(const Quadrat& q) {
    const int n = q.size();
    for (const auto& fila : q) {
        vector <bool> nums (n+1, false);
        for (const auto& val : fila) {
            if (val == 0 or val > n or nums[val]) return false;
            nums[val] = true;
        }
    }
    for (int i = 0; i < n; ++i) {
        vector <bool> nums (n+1, false);
        for (int j = 0; j < n; ++j) {
            if (nums[q[j][i]]) return false;
            nums[q[j][i]] = true;
        }
    }
    return true;
}

int main () { }

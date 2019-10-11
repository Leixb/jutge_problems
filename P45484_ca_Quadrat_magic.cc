#include <bits/stdc++.h>
using namespace std;

bool quadrat_magic(const vector< vector<int> >& t) {
    int n;
    bool ok = true;
    vector <bool> done (t.size(),false);
    for (size_t i = 0; i < t.size() and ok; ++i) {
        int sum_a = 0, sum_b = 0;
        for (size_t j = 0; j < t.size(); ++j) {
            sum_a += t[i][j];
            sum_b += t[j][i];
            size_t index = int(sqrt(t[i][j]))-1;
            if (index < done.size()) done[index]=true;
            else ok = false;
        }
        if (i==0) n = sum_a;
        if (n!=sum_a or n!=sum_b) ok = false;
    }
    if (ok) {
        int sum_a = 0, sum_b = 0;
        for (size_t i = 0; i < t.size(); ++i) {
            sum_a+=t[i][i];
            sum_b+=t[i][t.size()-1-i];
        }
        if (n!=sum_a or n!=sum_b) ok = false;
    }
    for (size_t i = 0; i < done.size() and ok; ++i) ok &= done[i];
    return ok;
}

int main () {
}


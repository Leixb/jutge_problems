#include <bits/stdc++.h>
using namespace std;

vector<double> difference(const vector<double>& v1, const vector<double>& v2) {
    vector<double> v3;

    int i=0, j=0;

    while ( i < v1.size() and j < v2.size() ) {
        if (v1[i] == v2[j]) ++i;
        else if (v1[i] < v2[j]) {
            if (!v3.size() or v1[i] != v3.back()) v3.push_back(v1[i]);
            ++i;
        } else ++j;
    }

    while (i < v1.size()) {
        if (!v3.size() or v1[i] != v3.back()) v3.push_back(v1[i]);
        ++i;
    }

    return v3;
}

int main () { }

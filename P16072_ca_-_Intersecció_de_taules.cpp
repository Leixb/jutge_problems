#include <bits/stdc++.h>
using namespace std;

vector<double> interseccio(const vector<double>& v1, const vector<double>& v2) {
    auto it1 = v1.begin(), it2 = v2.begin();

    vector <double> inter;

    while (it1 != v1.end() and it2 != v2.end()) {
        if (*it1 == *it2) {
            if ((not inter.size()) or *it1 != inter[inter.size()-1]) inter.push_back(*it1);
            ++it1, ++it2;
        } else if (*it1 < *it2) ++it1;
        else ++it2;
    }

    return inter;
}

int main () { }

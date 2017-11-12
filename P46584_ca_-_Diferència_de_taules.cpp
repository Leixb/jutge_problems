#include <vector>
using namespace std;

vector<double> diferencia(const vector<double>& v1, const vector<double>& v2) {
    vector <double> v3;

    auto it1 = v1.begin(), it2 = v2.begin();

    while (it1 != v1.end() and it2 != v2.end())
        if (*it1 == *it2) ++it1;
        else if (*it1 < *it2) {
            if ((not v3.size()) or *it1 != v3[v3.size()-1]) v3.push_back(*it1);
            ++it1;
        } else ++it2;

    while (it1 != v1.end()) {
        if ((not v3.size()) or *it1 != v3[v3.size()-1]) v3.push_back(*it1);
        ++it1;
    }

    return v3;
}

int main () {}

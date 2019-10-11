#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void ordena_per_bombolla(vector<double>& v) {
    sort(v.begin(),v.end());
    return;
    for (size_t i = 1; i < v.size(); i++)
        for (size_t j = 0; j < v.size()-1; j++)
            if (v[j]>v[j+1]) swap(v[j],v[j+1]);
}

int main () {}

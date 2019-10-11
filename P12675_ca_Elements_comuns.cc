#include <bits/stdc++.h>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
    size_t i=0, j=0, cont=0;
    while(i < X.size() and  j < Y.size())
        if (X[i] == Y[j] and (++i, ++j)) ++cont;
        else if (X[i] < Y[j]) ++i;
        else ++j;
    return cont;
}

int main () { }

#include <bits/stdc++.h>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Rectangle;

void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
    size_t mnf, mnc, mxf=r.size()+1, mxc;
    for (size_t i=0, found = false; i < r.size() and not found; ++i)
        for (size_t j=0; j < r[0].size() and not found; ++j)
            if (r[i][j] == c) {
                found = true;
                mnf = i;
            }
    for (size_t i=r.size()-1, found=false; i < r.size() and not found; --i)
        for (size_t j=0; j < r[0].size() and not found; ++j)
            if (r[i][j] == c) {
                found = true;
                mxf = i;
            }
    for (size_t j=0, found = false; j < r[0].size() and not found; ++j)
        for (size_t i=0; i < r.size() and not found; ++i)
            if (r[i][j] == c) {
                found = true;
                mnc = j;
            }
    for (size_t j=r[0].size()-1, found=false; j < r[0].size() and not found; --j)
        for (size_t i=0; i < r.size() and not found; ++i)
            if (r[i][j] == c) {
                found = true;
                mxc = j;
            }
    fils = mxf-mnf+1;
    cols = mxc-mnc+1;
}

int main () { }

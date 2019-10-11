#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    double logn= log(n);
    for (int i = 2; i <=16; ++i) {
        int res = floor(logn/log(i)) +1 ;
        printf("Base %d: %d cifras.\n",i,res);
    }
}


#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b;
    while (cin >> a >> b) {
        long long sum = 0;
        for (int i = a; i <= b; ++i) sum+= i*i*i;
        printf("suma dels cubs entre %i i %i: %i\n",a,b,sum);
    }
}


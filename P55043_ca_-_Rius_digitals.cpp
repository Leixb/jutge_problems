#include <bits/stdc++.h>
using namespace std;

int suma_digits(int n) {
    int sum;
    for (sum = 0; n > 0; n/=10) sum += n%10;
    return sum;
}

int trobada_de_rius(int n) {
    for (int r1=1, r3=3, r9=9;;) {
        while (n > r1) r1 += suma_digits(r1);
        while (n > r3) r3 += suma_digits(r3);
        while (n > r9) r9 += suma_digits(r9);

        if (n == r1 or n == r3 or n == r9) return n;
        else n += suma_digits(n);
    }
}


int main () {}

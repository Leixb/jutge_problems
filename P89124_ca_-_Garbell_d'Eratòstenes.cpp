#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

bitset <size_t(10e6+2)> primer ;

void garbell () {
    primer[0]=1; primer[1]=1;
    for (size_t i = 2; i < size_t(sqrt(primer.size())+0.0001); i++)
        if (primer[i]) continue;
        else for (size_t j = i*2; j < primer.size(); j+=i) primer[j]=1;
    primer.flip();
}

int main () {
    size_t n;
    garbell();
    while (cin >> n) (primer[n])? cout << n << " es primer" << endl : cout << n << " no es primer" << endl;
}

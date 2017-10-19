#include <bits/stdc++.h>
using namespace std;

bitset <size_t(8e3)> primer ;

void garbell () {
    primer[0]=1; primer[1]=1;
    for (size_t i = 2; i < size_t(sqrt(primer.size())+0.0001); i++)
        if (primer[i]) continue;
        else for (size_t j = i*2; j < primer.size(); j+=i) primer[j]=1;
    primer.flip();
}

int main () {
    int n;
    garbell();
    while (cin >> n) {
        for (int i = 2, cont=0; cont < n;++i) {
            if (primer[i]) {
                if (cont) cout << ',';
                cout << i;
                ++cont;
            }
        }
        cout << endl;
    }
}

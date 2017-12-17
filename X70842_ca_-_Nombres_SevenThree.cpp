#include <bits/stdc++.h>
using namespace std;

//pre: n >  0
//post: returns true if n is a SevenThree number
//         returns false if n is not a SevenThree number
bool is_seventhree_number(int n) {
    if (n == 1) return true;
    if (n%7 == 0) return is_seventhree_number(n/7);
    if (n%3 == 0) return is_seventhree_number(n/3);
    return false;
}

int main () {
    for (int n, cont = 0; cin >> n; cont = 0) {
        for (int i = 0, num; i < n and cin >> num; ++i) cont += is_seventhree_number(num);
        cout << cont << endl;
    }
}

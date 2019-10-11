#include <bits/stdc++.h>
using namespace std;

inline int sum_of_squares(int n) {
    int sum = 0;
    for (;n > 0; n /= 10) sum += (n%10)*(n%10);
    return sum;
}

bool is_happy(int n) {
    if (n < 10) return n==1 or n==7;
    return is_happy(sum_of_squares(n));
}

int main () {
    int happies = 0, sads = 0;

    for (int n; cin >> n;)
        if (is_happy(n)) {
            cout << n << " is a happy number" << endl;
            ++happies;
        } else {
            cout << n << " is a sad number" << endl;
            ++sads;
        }
    cout << endl << "happy numbers: " << happies
         << endl << "sad numbers: " << sads << endl;
}

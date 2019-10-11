#include <bits/stdc++.h>
using namespace std;

inline int sum_of_squares(int n) {
    int sum = 0;
    for (;n > 0; n /= 10) sum += (n%10)*(n%10);
    return sum;
}

int happiness_index(int n) {
    if (n < 10) {
        if (n==1) return 1;
        else if (n==7) return 6;
        else return -1;
    }
    const int happiness = happiness_index(sum_of_squares(n));
    return (happiness < 0)? -1 : 1 + happiness;
}

int main () {
    int happies = 0, sads = 0;

    for (int n; cin >> n;) {
        const int happiness = happiness_index(n);
        cout << n << " has happiness index " << happiness << endl;

        if (happiness < 0) ++sads;
        else ++happies;
    }
    cout << endl << "happy numbers: " << happies
         << endl << "sad numbers: " << sads << endl;
}

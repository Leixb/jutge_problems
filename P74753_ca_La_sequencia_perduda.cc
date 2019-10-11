#include <bits/stdc++.h>
using namespace std;

vector <int> cache;

int f(const int& i) {
    if (cache[i] == -10000) cache[i] = f(i-5) + f(i-3) + f(i-1);
    return cache[i];
}

int main() {
    int n;
    cache = vector<int> (50, -10000);
    cache[0] = -3;
    cache[1] = -1;
    cache[2] = 4;
    cache[3] = 8;
    cache[4] = 15;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) cout << f(i) << " ";
        cout << "..." << endl;
    }
}

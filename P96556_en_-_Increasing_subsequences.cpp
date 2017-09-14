#include <iostream>
#include <vector>
using namespace std;

vector <long long> m;

string st;
long long n;

long long num (long long s, const char& c = '$') {
    long long cnt = 0;
    if (m[s] != -1) return m[s];
    long long be = s;
    while (s != n) {
        if (st[s] > c) {
            cnt++;
            cnt += num(s,st[s]);
        }
        s++;
    }
    m[be] = cnt;
    return cnt;
}

int main () {
    while (cin >> st) {
        n = st.size();
        m = vector<long long> (n, -1);
        cout << num(0) - n << endl;
    }
}

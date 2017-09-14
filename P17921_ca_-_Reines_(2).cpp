#include <iostream>
#include <vector>
using namespace std;

int n;

template <class T>
inline T abs (const T& n) { return (n<0)? -n: n; }

#define m int(v.size())
void back(vector <int> v = vector <int> (0), vector <bool> f = vector <bool> (n,0)) {
    if (m==n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (j==v[i]) cout << 'Q';
                else cout << '.';
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    v.push_back(0);
    for (int i = 0; i < n; i++) {
        if (f[i]) continue;
        v[m-1]=i;
        bool t = true;
        for (int j = 0; j < m-1; j++)
            if (abs(v[m-1]-v[j])==abs(m-1-j)) {
                t = false;
                break;
            }
        if (!t) continue;
        v[m-1]=i;
        f[i]=1;
        back(v,f);
        f[i]=0;
    }
}

int main () {
    cin >> n;
    back();
}

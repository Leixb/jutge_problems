#include <iostream>
#include <vector>
using namespace std;

vector <string> s;
int n;

void back(vector <int> v=vector <int> (0)) {
    if (v.size()==n) {
        cout << '(';
        for (int i = 0; i < n; i++) {
            if (i!=0) cout << ',';
            cout << s[v[i]];
        }
        cout << ')' << endl;
        return;
    }
    v.push_back(0);
    for (int i = 0; i < n; i++) {
        v[v.size()-1]=i;
        back(v);
    }
}

int main () {
    cin >> n;
    s.resize(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    back();
}

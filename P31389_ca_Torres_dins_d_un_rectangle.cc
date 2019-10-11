#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int f,c;

void back(vector <int> v=vector <int> (0), vector <bool> fet=vector <bool> (c)) {
    if (v.size()==f) {
        for (int i = 0; i < f; i++) {
            for (int j = 0; j < c; j++) {
                if (j==v[i]) cout << 'R';
                else cout << '.';
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    v.push_back(0);
    for (int i = 0; i < c; i++) {
        if (fet[i]) continue;
        v[v.size()-1]=i;
        fet[i]=1;
        back(v,fet);
        fet[i]=0;
    }
}

int main () {
    cin >> f >> c;
    back();
}

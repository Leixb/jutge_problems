#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main () {
    int n;
    map <string,int> m;
    vector <int> v;
    while (cin >> n) {
        v = vector <int> (n+1,0);
        m.erase(m.begin(),m.end());
        while (n--) {
            string s;
            cin >> s;
            m[s]++;
            v[m[s]-1]-= s.size();
            v[m[s]] += s.size();
        }
        for (int i = 1; i < v.size(); i++) {
            if (v[i]!=0) {
                cout << i << " : " << v[i] << endl;
            }
        }
        cout << endl;
    }
}

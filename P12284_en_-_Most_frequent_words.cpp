#include <iostream>
#include <map>
#include <set>
using namespace std;

int main () {
    size_t n,k;
    while (cin >> n >> k) {
        map <string,int> m;
        while (n--) {
            string s;
            cin >> s;
            m[s]++;
        }
        map <int, set <string> > mm;
        for (auto i : m) mm[i.second].insert(i.first);
        bool b=true;
        for (auto i = mm.rbegin(); i != mm.rend() and b; i++) for (auto j : i->second) if (k--) cout << j << endl; else {b=0;break;}
        cout << "----------" << endl;
        m.clear();
        mm.clear();
    }
}

#include <iostream>
#include <map>
using namespace std;

int main () {
    int n;
    cin >> n;
    map <int,int> m;
    while (n--) {
        int p;
        cin >> p;
        m[p]++;
    }
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }
}

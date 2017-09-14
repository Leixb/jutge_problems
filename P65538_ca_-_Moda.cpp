#include <iostream>
#include <map>
using namespace std;

int main () {
	int n;
    while (cin >> n) {
        if (n==0) return 1;
        map <string,int> m;
        int max = 0;
        string name = "";
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            if (m.find(s)==m.end()) m[s]=0;
            else m[s]++;
            if (m[s]>max or (m[s]==max and s > name)) {
                max = m[s];
                name = s;
            }
        }
        m.erase(m.begin(),m.end());
        cout << name << endl;
    }
}

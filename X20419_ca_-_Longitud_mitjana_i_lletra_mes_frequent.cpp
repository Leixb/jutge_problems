#include <bits/stdc++.h>
using namespace std;

char lletra_mes_frequent(const string& s) {
    vector <int> v (30,0);
    char ll = 'z'+1;
    int mx = 0;
    for (size_t i = 0; i < s.size(); ++i)
        if (++v[s[i]-'a'] > mx or (v[s[i]-'a'] == mx and s[i] < ll)) {
            mx = v[s[i]-'a'];
            ll = s[i];
        }
    return ll;
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    long sum = 0;
    cin >> n;
    double n2 = n;
    vector <string> v;
    while (n--) {
        string s;
        cin >> s;
        v.push_back(s);
        sum += s.size();
    }
    double mean = sum/n2;
    cout << mean << endl;
    for (size_t i = 0; i < v.size(); ++i) 
        if (v[i].size()>=mean) cout << v[i] << ": " << lletra_mes_frequent(v[i]) << endl;
}

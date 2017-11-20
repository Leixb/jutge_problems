#include <bits/stdc++.h>
using namespace std;

char lletra_mes_frequent(const string& s) {
    vector <int> v (30,0);
    char ll = 'z' + 1;
    int mx = 0;
    for (size_t i = 0; i < s.size(); ++i)
        if (++v[s[i] - 'a'] > mx or (v[s[i] - 'a'] == mx and s[i] < ll))
            mx = v[s[i] - 'a'], ll = s[i];
    return ll;
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n, sum = 0;
    cin >> n;
    vector <string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i].size();
    }

    double mean = sum/double(n);
    cout << mean << endl;
    for (size_t i = 0; i < v.size(); ++i)
        if (v[i].size()>=mean) cout << v[i] << ": " << lletra_mes_frequent(v[i]) << endl;
}

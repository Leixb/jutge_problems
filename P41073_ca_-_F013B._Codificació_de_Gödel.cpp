#include <bits/stdc++.h>
using namespace std;

bitset <size_t(4e6+1)> primer;
vector <int> primers;

void garbell () {
    primer[0]=primer[1]=1;
    for (size_t i = 2; i < size_t(sqrt(primer.size())+0.0001); ++i)
        if (primer[i]) continue;
        else {
            for (size_t j = i*2; j < primer.size(); j+=i) primer[j]=1;
            primers.push_back(i);
        }
    for (size_t i = sqrt(primer.size()); i < primer.size(); ++i)
        if (!primer[i]) primers.push_back(i);
}

int main () {
    string s;
    garbell();
    while (cin >> s) {
        long codi = 1;
        for (size_t i = 0; i < s.size(); ++i) codi *= pow(primers[i], s[i]-'0');
        cout << s << " -> " << codi << endl;
    }
}

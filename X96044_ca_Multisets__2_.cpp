#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<string> Set;
typedef struct{string id; int occur;} Element;
typedef vector<Element> Multiset;

Set read_set(){
    int n;
    cin >> n;
    Set s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];  
    return s;
}

bool empty(const Set& s){
    return s.size() == 0;
}

void write_multiset(const Multiset& m){
    for (size_t i=0; i < m.size(); ++i)
        cout << "(" << m[i].id << " , " << m[i].occur << ")" << endl;
}

Multiset multi_union(Multiset& m, Set& s1){
    // afegiu aquí el codi demanat
    Multiset res;

    size_t p1 = 0, p2 = 0;

    while (p1 < m.size() and p2 < s1.size()) {
        if (m[p1].id < s1[p2]) res.push_back(m[p1++]);
        else if (m[p1].id == s1[p2]) res.push_back({ m[p1].id, m[p1++].occur + 1 }), p2++;
        else res.push_back({s1[p2++], 1});
    }

    while (p2 < s1.size()) res.push_back({s1[p2++], 1});
    while (p1 < m.size()) res.push_back(m[p1++]);

    return res;
}

int main(){
    Multiset Union;
    for (;;) {
        Set newset = read_set();

        if (newset.size() == 0) {
            write_multiset(Union);
            return 0;
        }

        sort(newset.begin(), newset.end());

        Union = multi_union(Union, newset);
    }
}

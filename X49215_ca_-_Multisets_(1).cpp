#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    string id;
    int num;
} MultiElem;

typedef vector<MultiElem> MultiSet;

MultiSet readMultiSet() {
    int n;
    cin >> n;
    MultiSet v(n);
    for (int i=0; i<n; ++i)
        cin >> v[i].id >> v[i].num;
    return v;
}

void writeMultiSet(const MultiSet& m) {
    for (size_t i=0; i<m.size(); ++i)
        cout << "(" << m[i].id << " , " << m[i].num << ")" << endl;
}

bool emptyMultiSet(const MultiSet& m) {
    return m.size() == 0;
}

MultiSet unionMultiSets(MultiSet& m1, MultiSet& m2) {
    MultiSet res;

    size_t p1 = 0, p2 = 0;

    while (p1 < m1.size() and p2 < m2.size()) {
        if (m1[p1].id < m2[p2].id) res.push_back(m1[p1++]);
        else if (m1[p1].id == m2[p2].id) res.push_back({ m1[p1].id, m1[p1++].num + m2[p2++].num });
        else res.push_back(m2[p2++]);
    }

    while (p2 < m2.size()) res.push_back(m2[p2++]);
    while (p1 < m1.size()) res.push_back(m1[p1++]);

    return res;
}

bool comp(const MultiElem& a, const MultiElem& b) {
    return a.id < b.id;
}

int main() {
    MultiSet unio, newset;

    for (;;) {
        newset = readMultiSet();

        if (emptyMultiSet(newset)) {
            writeMultiSet(unio);
            return 0;
        }

        sort(newset.begin(), newset.end(), comp);

        unio = unionMultiSets(unio, newset);
    }
}


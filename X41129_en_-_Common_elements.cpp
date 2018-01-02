#include <iostream>
#include <vector>
using namespace std;

vector<int> read_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) 
        cin >> v[i];
    return v;
}

bool find(const vector<int>& v, const int& val) {
    int L=0, R=v.size();
    while (L <= R) {
        int M = (L+R)/2;

        if (v[M] == val) return true;
        if (v[M] < val) L = M+1;
        else R = M-1;
    }

    return false;
}

// Pre: v is sorted in strictly increasing order.
// Returns the number of positions in w that contain elements that also occur in v.
int how_many_in_common(const vector<int>& v,const vector<int>& w) {
    int count = 0;

    for (const auto& val : w) count += find(v, val);

    return count;
}

int main() {
    int sz;
    cin>>sz;
    // sz = the size of v
    vector<int> v = read_vector(sz);
    while (cin >> sz) {
        // sz = the size of w
        vector<int> w = read_vector(sz);
        cout << how_many_in_common(v, w) << endl;
    }
}

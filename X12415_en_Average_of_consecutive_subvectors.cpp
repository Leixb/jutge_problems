#include <iostream>
#include <vector>
using namespace std;

// reads and returns the contents of a vector of n reals from cin, n > 0
vector<int> read_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) 
        cin >> v[i];
    return v;
}

// add here functions or procedures if you need them

// see the stament of the problem
void print_average_of_segments(const vector<int>& v, int k) {
    int p_sum=0;
    for (int i = 0; i < k; ++i) p_sum += v[i];
    cout << p_sum/(double)k;
    for (size_t i = k; i < v.size(); ++i) {
        p_sum += v[i] - v[i-k];
        cout << ' ' << p_sum/(double)k;
    }
    cout << endl;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n,k;
    while (cin >> n >> k) {
        vector<int> v = read_vector(n);
        print_average_of_segments(v,k);
    }
} 

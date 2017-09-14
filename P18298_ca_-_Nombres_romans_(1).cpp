#include <iostream>
#include <vector>
using namespace std;

string roman (int n) {
    vector <pair <int,string> > v = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}, {0, ""}}; 
    string res = "";
    for (int i = 0; i < v.size() and v[i].first > 0; i++)
        while (n >= v[i].first) {
            res += v[i].second;
            n -= v[i].first;
        }
    return res;
}

int main() {
    int n;
    while (cin >> n) cout << n << " = "<< roman(n) << endl;
}

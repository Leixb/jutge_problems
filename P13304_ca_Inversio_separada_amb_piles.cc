#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main () {
    string s;
    while (getline(cin,s)) {
        stringstream ss (s);
        int n;
        stack <int> sodd;
        stack <int> seven;
        while (ss >> n)
            if (n%2) sodd.push(n);
            else seven.push(n);
        bool nf = false;
        while (!seven.empty()) {
            if (nf) cout << ' ';
            else nf=true;
            cout << seven.top();
            seven.pop();
        }
        while (!sodd.empty()) {
            if (nf) cout << ' ';
            else nf=true;
            cout << sodd.top();
            sodd.pop();
        }
        cout << endl;
    }
}

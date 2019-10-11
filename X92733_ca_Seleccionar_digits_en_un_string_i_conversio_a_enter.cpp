#include <iostream>
using namespace std;

// Pre: k>0
int select_digits(string s, int pos, int k) {
    // add here required code
    if (pos == 0) return 0;
    if ((s.length() - pos+1)%k == 0) return s[pos-1]-'0' + 10*select_digits(s, pos-1, k);
    return select_digits(s, pos-1, k);
}

int main() {
    int k;
    string s;
    while (cin >> s >> k) {
        // Invocation with pos = length of the string 
        cout << select_digits(s, s.length(), k) << endl;
    }
}

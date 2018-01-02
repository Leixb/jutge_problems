#include <iostream>
#include <string>
using namespace std;

void make_uppercase_lowercase(const string& T) {
    for (char c; cin >> c;)
        if (c >= 'a' and c <= 'z')
            cout << (T[c - 'a']=='U'? char(c&(0b11011111)) : c);
        else if (c >= 'A' and c <= 'Z')
            cout << (T[c - 'A']=='L'? char(c|(0b00100000)) : c);
    cout << endl;
}

int main() {
    string T;
    cin >> T;
    make_uppercase_lowercase(T);
}

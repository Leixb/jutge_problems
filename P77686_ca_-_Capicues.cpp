#include <iostream>
#include <sstream>
using namespace std;

bool es_capicua(int n) {
    stringstream ss;
    ss << n;
    string s;
    ss >> s;
    bool b = 1;
    for (int i = 0; i < s.size(); i++) {
        b = b and (s[i]==s[s.size()-i-1]);
    }
    return b;
}

int main () {
	int n;
    while (cin >> n) {
        if (es_capicua(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}

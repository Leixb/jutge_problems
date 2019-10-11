#include <iostream>
#include <vector>
using namespace std;

int to_int(char c) {
    switch (c)
    {
        case 'I':  return 1;
        case 'V':  return 5;
        case 'X':  return 10;
        case 'L':  return 50;
        case 'C':  return 100;
        case 'D':  return 500;
        case 'M':  return 1000;
    }
    return 0;
}

int conv(string s) {
    int prev = 0, res = 0;
    for (int i = s.size()-1; i >= 0; i--) {
        int v = to_int(s[i]);
        res += (v < prev)? -v : v;
        prev = v;
    }
    return res;
}

int main () {
    string s;
    while (cin >> s){
        s.erase(s.end()-1,s.end());
        cout << s << " = " << conv(s) << endl;
    }
}

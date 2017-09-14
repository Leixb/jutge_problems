#include <iostream>
#include <stack>
using namespace std;

int main () {
    string s;
    int n;
    cin >> n;
    stack <string> ss;
    while (n--) {
        string s2 = "";
        cin >> s;
        for (int i = s.size()-1; i >= 0; i--) s2 += s[i];
        ss.push(s2);
    }
    while (!ss.empty()) {
        cout << ss.top() << endl;
        ss.pop();
    }        
}

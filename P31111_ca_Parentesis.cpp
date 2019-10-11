#include <iostream>
#include <stack>
using namespace std;

int main () {
	stack <char> s;
    char c;
    while (cin >> c) {
        if (s.size()==0 and c==')') {
            s.push(c);
            break;
        }
        if (c==')' and s.top() == '(') s.pop();
        else s.push(c);
    }
    if (s.size()!=0) cout << "no" << endl;
    else cout << "si" << endl;
}

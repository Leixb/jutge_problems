#include <iostream>
#include <stack>
using namespace std;

void escriu_de_cim_a_base(stack<int>& pila) {
    stack <int> s;
    bool f = true;
    while (!pila.empty()) {
        if (!f) cout << ' ';
        else f=false;
        s.push(pila.top());
        cout << pila.top();
        pila.pop();
    }
    while (!s.empty()) {
        pila.push(s.top());
        s.pop();
    }
    cout << endl;
}

void escriu_de_base_a_cim(stack <int>& pila) {
    stack <int> s;
    while (!pila.empty()) {
        s.push(pila.top());
        pila.pop();
    }
    bool f = true;
    while (!s.empty()) {
        if (!f) cout << ' ';
        else f=false;
        pila.push(s.top());
        cout << pila.top();
        s.pop();
    }
    cout << endl;
}
 
int main () {}

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<stack<string> > v(n);

    for (int op; cin >> op and op != -4;) {
        if (op == -1) {
            int categoria;
            string name;
            cin >> name >> categoria;


            v[categoria-1].push(name);
        } else if (op == -2) {
            int num, categoria;
            cin >> num >> categoria;
            while (num--) v[categoria-1].pop();
        } else {
            int categoria;
            cin >> categoria;
            cout << "Pila de la categoria " << categoria << endl;

            for (stack<string> st = v[categoria-1]; !st.empty(); st.pop())
                cout << st.top() << endl;
            cout << endl;
        }
    }
}

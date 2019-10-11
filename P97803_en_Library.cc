#include <bits/stdc++.h>
using namespace std;

void unstack(stack <string>& pila) {
    if (pila.empty()) return;

    string book = pila.top();

    pila.pop();
    unstack(pila);

    cout << ' ' << book;
}

int main () {
    int n;
    cin >> n;

    cin.ignore();

    vector<stack<string> > books(n);
    for (auto& pila : books) {
        string book_list;
        if (getline(cin, book_list)) {
            stringstream SS(book_list);
            for (string book; SS >> book;) pila.push(book);
        }
    }

    cin.ignore();

    for (string action; cin >> action;) {
        if (action == "LOAN") {
            int pila;
            cin >> pila;
            --pila;

            if (pila >= 0 and pila < n and !books[pila].empty()) books[pila].pop();
        } else {
            string title;
            int pila;
            cin >> title >> pila;
            --pila;

            if (pila >= 0 and pila < n) books[pila].push(title);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << "Stack " << i+1 << ':';
        unstack(books[i]);
        cout << endl;
    }
}

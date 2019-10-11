#include <iostream>
#include <string>
using namespace std;

// afegiu definicions de funcions i/o procediments en
// aquest punt, si ho estimeu convenient

// vegeu l'enunciat del problema
void encipher(const string& key) {
    for (char c; cin >> c;)
        if (c >= 'A' and c <= 'Z') cout << key[c - 'A'];
        else if (c >= 'a' and c <= 'z') cout << key[c - 'a'];
    cout << endl;
}

int main() {
    string key; 
    cin >> key;
    encipher(key);
}

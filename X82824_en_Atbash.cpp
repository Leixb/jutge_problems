#include <bits/stdc++.h>
using namespace std;

// c is an upper- or lowercase letter

char atbash(char c) {
    if (c >= 'a' and c <= 'z') c += 'A'-'a';
    return 'Z' - (c - 'A');
}

// returns the uppercase Atbash encipherment of c
// e.g. atbash('A')='Z', atbash('y')='B', ...

// the standard input channel (cin) contains a sequence
// of characters ending in '#'

void print_atbash_encipherment() {
    for (char c; cin >> c and c != '#';)
        if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) cout << atbash(c);
    cout << '#' << endl;
}

// prints the Atbash encipherment of the text,
// including the end-of-text character '#' and an end of line.

int main () {
    print_atbash_encipherment();
}

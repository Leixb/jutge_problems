#include <iostream>
using namespace std;

int main () {
    char c;
    cin >> c;
    if (c < 'a') cout << (char)(c+('a'-'A')) << endl;
    else cout << (char)(c+('A'-'a')) << endl;
}
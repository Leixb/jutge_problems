#include <iostream>
using namespace std;

int main () {
	string str;
    cin >> str;
    int x = 0, y = 0;
    for (int i = 0; i < str.size(); i++) {
        switch (str[i]) {
            case 'n': y--; break;
            case 's': y++; break;
            case 'e': x++; break;
            case 'o': x--; break;
        }
    }
    cout << '(' << x << ", " << y << ')' << endl;
}

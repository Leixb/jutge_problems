#include <iostream>
using namespace std;


void print(int s, char c, int n) {
    for (int i = 0; i < s; i++) cout << ' ';
    for (int i = 0; i < n; i++) cout << c;
    cout << endl;
}

void cross(int n, char c) {
    for (int i = 0; i < n; i++) {
        if (i == n/2) print(0,c,n);
        else print(n/2,c,1);
    }
}

int main () {
	cross(5,'X');
}

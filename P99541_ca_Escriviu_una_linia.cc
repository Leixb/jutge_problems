#include <iostream>
using namespace std;

void print(int s, char c, int n) {
    for (int i = 0; i < s; i++) cout << ' ';
    for (int i = 0; i < n; i++) cout << c;
    cout << endl;
}

int main () {
	print(0, 'X', 3); 
    print(1, 'y', 4); 
    print(2, 'A', 2);
}

#include <iostream>
using namespace std;

void than (int d, char pos='A', char aux='B', char target='C') {
    if (d==1) cout << pos << " => " << target << endl; 
    else {
        than(d-1,pos,target,aux);
        cout << pos << " => " << target << endl; 
        than(d-1,aux,pos,target);
    }
}

int main () {
    int n;
    cin >> n;
    than(n);
}

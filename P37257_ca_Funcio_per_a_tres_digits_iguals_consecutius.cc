#include <iostream>
#include <vector>
using namespace std;

bool tres_digits_seguits_iguals(int n, int b) {
    int pre=b, c=0;
    while (n!=0) {
       if (pre==n%b) c++;
       else {c=0; pre=n%b;}
       if (c>=2) return 1;
       n/=b;
    }
    return 0;
}

int main () {
    int n,b;
    while (cin >> n >> b) cout << boolalpha << tres_digits_seguits_iguals(n,b) << endl;
}

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int sum = n;
    for (int i = 1; i <= n; i++) {
        printf("%i x %i = %i\n", n , i ,sum);
        sum+=n;
    }
}

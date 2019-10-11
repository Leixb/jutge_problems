#include <bits/stdc++.h>
using namespace std;

int main () {
    int money;
    while (cin >> money and money >= 0) {
        cout << money << ": ";
        int coins[] = {1, 2, 5, 10, 20, 50, 100, 200},
            i = sizeof(coins)/sizeof(int), cont = 0;
        while (i--) {
            if (coins[i] <= money) {
                cont += money/coins[i];
                money %= coins[i];
            }
        }
        cout << cont << endl;
    }
}

#include <iostream> 
using namespace std;

bool vocal (char c) {
    return (c == 'a' or c=='e' or c=='i' or c=='u' or c=='o');
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        for (auto j : {'a','e','i','o','u'}) {
            for (auto i : s) {
                if (vocal(i)) cout << j;
                else cout << i;
            }
            if (j != 'u') cout << ',';
        }
        cout << '.' << endl;
    }
}

#include <iostream> 
#include <map>
using namespace std;

int main () {
    map <long,int> m;
    long n;
    while (cin >> n) m[n]++;
    for (auto i : m) if (i.second <= 1) {
        cout << i.first<< endl;
        break;
    }
}

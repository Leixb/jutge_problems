#include <iostream>
#include <set>
using namespace std;

#define ullint unsigned long long

void reco (ullint n, ullint num, ullint mida, set <string>& s) {
    if (n==0) {
        // Calcula valors
        int cont = 0;
        set <string> s2;
        for( auto it = s.begin(); it != s.end(); it++) {
            if (num>>cont & 1) s2.insert(*it);
            cont++;
        }
        //Mostra
        cout << '{';
        for (auto i: s2) {
            if (i == *s2.begin()) cout << i;
            else cout << ',' << i;
        }
        cout << '}' << endl;
        return;
    }
    reco(n-1, num<<1, mida,s);
    reco(n-1, (num<<1)+1, mida,s);
}

int main () {
    int n;
    string t1;
    set <string> words;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t1;
        words.insert(t1);
    }
    reco(n,0,n,words);
}

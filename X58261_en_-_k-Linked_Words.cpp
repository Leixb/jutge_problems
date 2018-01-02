#include <iostream>
#include <string>
using namespace std;

bool is_k_linked(int k) {
    string pre;
    if(cin >> pre) {
        if ((int)pre.size() < k) return false;

        for(string s; cin >> s; pre = s) {
            if ((int)s.size() < k) return false;

            for (int i = 0; i < k; ++i)
                if (pre[pre.length()-k+i] != s[i]) return false;
        }
    }
    return true;
}

int main() {
    int k;
    cin >> k;
    if (is_k_linked(k))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

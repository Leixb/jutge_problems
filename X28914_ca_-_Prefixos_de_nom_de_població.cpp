#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int PREFIX_LEN = 3;

// The function reads in a vector a sequence 
// of prefixes till the word "FI"
vector<string> load_prefixes(){
    vector<string> pref;
    string s;
    cin >> s;
    while (s != "FI") {
        pref.push_back(s);
        cin >> s;
    }
    return pref;
}

// This function reads n words and returns a vector with the prefix of each word
vector<string> read_words(int n){
    vector<string> wpref(n);
    string s;
    for (int i = 0; i < n; ++i){
        cin >> s;
        wpref[i] = "";
        for (int k = 0; k < PREFIX_LEN; ++k)
            wpref[i].push_back(s[k]);
    }
    return wpref;
}

bool prefix_index(const vector<string>& prefixes, const string& s) {
    int L=0, R=prefixes.size();
    while (L <= R) {
        const int M = (L+R)/2;
        if (prefixes[M] == s) return true;
        else if (prefixes[M] > s) R = M-1;
        else L = M+1;
    }
    return false;
}

int main() {
    vector<string> prefixes = load_prefixes();
    sort(prefixes.begin(), prefixes.end());

    for (int n; cin >> n;) {
        vector <string> v = read_words(n);
        sort(v.begin(), v.end());

        string prev_pref = v[0];
        bool is_prefix = prefix_index(prefixes, prev_pref);
        int mx=0, cont = is_prefix;
        for (int i = 1; i < n; ++i) {
            if (prev_pref == v[i]) {
                cont += is_prefix;
            } else {
                mx = max(mx, cont);
                prev_pref = v[i];
                is_prefix = prefix_index(prefixes, prev_pref);
                cont = is_prefix;
            }
        }
        mx = max(mx, cont);
        cout << mx << endl;
    }
}

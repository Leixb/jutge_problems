#include <bits/stdc++.h>
using namespace std;

/// Input: a lowercase letter
/// Output: A boolean indicating whether the given character is a vowel
bool is_vowel(char c) {
    return c=='a' or c=='e' or c=='i' or c=='o' or c=='u';
}

/// Input: a string made of lowercase letters
/// Output: An integer containing the number of vowels in the given string
int num_vowels(const string &s) {
    int n = s.length();
    int nv = 0;
    for (int i = 0;  i < n;  ++i)
        if (is_vowel(s[i])) ++nv;
    return nv;
}


int main () {
    string word;
    cin >> word;
    int mn_vow = num_vowels(word);
    for (string s; cin >> s;) {
        const int vowels = num_vowels(s);
        if (vowels < mn_vow) mn_vow = vowels, word = s;
    }
    cout << word << ' ' << mn_vow << endl;
}

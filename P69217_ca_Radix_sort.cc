#include <iostream>
#include <vector>
#include <algorithm>
//#include <queue>
using namespace std;

int main () {
    string s;
    vector <string> v;
    while (cin >> s) v.push_back(s);
    sort(v.begin(),v.end());
    for (size_t i = 0; i < v.size(); ++i) {
       if (i != 0) cout << ' ';
       cout << v[i];
    }
    cout << endl;
}

/*
 *int main () {
 *    string s;
 *    vector <queue<string> > v (30);
 *    queue <string> Q;
 *    while (cin >> s) Q.push(s);
 *    for (int p = s.size()-1;p>=0;p--) {
 *        while (!Q.empty()) {
 *            string s = Q.front(); Q.pop();
 *            v[s[p]-'a'].push(s);
 *        }
 *        for (size_t i = 0; i < v.size(); i++)
 *            while (!v[i].empty()) {
 *                Q.push(v[i].front());
 *                v[i].pop();
 *            }
 *    }
 *    s = Q.front(); Q.pop();
 *    for (; !Q.empty(); s = " "+Q.front(), Q.pop()) cout << s;
 *    cout << s << endl;
 *}
 */

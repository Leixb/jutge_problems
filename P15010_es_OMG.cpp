#include <iostream>
#include <queue>
#include <sstream>
#include <vector>
using namespace std;

int main () {
    string s;
    int n;
    getline(cin,s);
    n = stoi(s);
    vector <vector <int> > v (n+1,vector <int>(0));
    vector <int> d (n+1,-1);
    string g;
    for (int i = 1; i <= n-1; i++) {
        getline(cin,s);
        stringstream ss (s);
        ss >> g;
        int num;
        while (ss >> num) v[i].push_back(num);
    }
    priority_queue <pair <int,int>,vector <pair <int,int> >, greater <pair <int,int> > > q;
    q.push({0,1});
    while (!q.empty()) {
        int p = q.top().second;
        int dd = q.top().first; q.pop();
        if (d[p]!=-1) continue;
        d[p]=dd;
        if (p==n) break;
        for (int i = 1; i < v[p].size(); i++) {
            q.push({max(dd,v[p][0]),v[p][i]});
        }
    }
    cout << d[n] << endl;
}

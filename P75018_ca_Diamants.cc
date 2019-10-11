//#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

#define endl '\n' //Don't flush at endl

set <int> s;
int V;
int half;

bool marry () {
    for (auto i : s) if (s.find(V-i)!=s.end() and ((i!=V/2) or (i==V/2 and V%2==0 and half>=2))) return true;
    return false;
}

int main () {
    ios::sync_with_stdio(false); //Faster cin && cout (buffer not sync with cstdio)
    int n;
    while (cin >> V >> n and V!=0 and n!=0) {
        half = 0;
        while (n--) {
            int t;
            cin >> t;
            if (t == V/2 and V%2==0) half++;
            if (t<V) s.insert(t);
        }
        (marry())? cout << "married" << endl : cout << "single" << endl ; 
        s.erase(s.begin(),s.end());
    }
}

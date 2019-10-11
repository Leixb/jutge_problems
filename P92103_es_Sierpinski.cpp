#include <iostream> 
#include <vector>
using namespace std;

vector <vector <bool> > v;

void serpinksi (int x_low,int x_up,int y_low,int y_up,int l) {
    if (l == 0) {v[x_low][y_low] = 1; return;}
    serpinksi(x_low,(x_low+x_up)/2,y_low,(y_low+y_up)/2,l-1);
    serpinksi((x_low+x_up)/2,x_up,y_low,(y_low+y_up)/2,l-1);
    serpinksi((x_low+x_up)/2,x_up,(y_low+y_up)/2,y_up,l-1);
}

int main () {
    int n;
    cin >> n;
    v.resize(1<<n, vector <bool> (1<<n,0));
    serpinksi(0,1<<n,0,1<<n,n);
    for (int i=0; i < v.size(); i++) {
        for (int j=0; j < v[i].size(); j++) {
                (v[j][i])? cout << '#' : cout << ' ';
        }
        cout << endl;
    }
}

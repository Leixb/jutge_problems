#include<bits/stdc++.h>
using namespace std;

typedef vector <double> vd;
typedef vector <int> vi;
typedef vector <vi> vvi;

int main(){
    int n;
    double d;
    while(cin >> n >> d){
        vd X(n), Y(n), R(n);
        vvi G(n);

        for(int i=0; i<n; i++) cin >> X[i] >> Y[i] >> R[i];
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                double dist = sqrt((X[i] - X[j])*(X[i] - X[j]) + (Y[i] - Y[j])*(Y[i] - Y[j]));
                dist -= R[i] + R[j];

                if(dist <= d){
                    G[i].push_back(j);
                    G[j].push_back(i);
                }
            }
        }
        vector <int> C(n, -1);
        queue<pair <int, int>> Q;

        C[0] = 0;
        Q.emplace(0, 0);
        while(!Q.empty()){
            pair <int,int> aux = Q.front();
            Q.pop();

            int va = get<0>(aux);
            int na = get<1>(aux);

            if(C[na] == va){
                for(auto x : G[na]){
                    if(C[x] == -1) Q.emplace(C[x] = va+1, x);
                }
            }
        }
        if(C[n-1] == -1) cout << "Xof!" << endl;
        else cout << C[n-1] << endl;

    }
}

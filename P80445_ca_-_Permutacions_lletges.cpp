#include <bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef vector <bool> vb;

int n, k;

vb pos_fixed;

void permute(vb &done, vi &N, const int& p=0, const int& lletges=0){
    if (lletges > k) return;
    if (p == n) {
        if(lletges == k){
            for (size_t i = 0; i < N.size(); ++i) {
                if(i) cout << " ";
                cout << N[i];
            }
            cout << endl;
        }
        return;
    }

    if(pos_fixed[p]) return permute(done, N, p+1, lletges + (p and abs(N[p]-N[p-1]) == 1));

    for(size_t i=0; i<done.size(); i++)
        if(!done[i]){
            done[i] = true;
            N[p] = i;
            permute(done, N, p+1, lletges + (p and abs(N[p]-N[p-1]) == 1));
            done[i] = false;
        }
}

int main(){
    for (int m; cin >> n >> k >> m;) {

        vb done(n, false);
        pos_fixed = done;

        vi N(n);

        for(int j=0; j<m; j++){
            int i;
            cin >> i >> N[i];
            pos_fixed[i] = done[N[i]] = true;
        }

        permute(done, N);

        cout << "********************" << endl;
    }
}

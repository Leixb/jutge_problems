#include <iostream>
#include <vector>
using namespace std;

int main () {
    int f,c;
    while (cin >> f >> c) {
        vector <vector <int> > v (f+2, vector <int> (c+2,0));
        for (int i = 0; i < f+2; i++) v[i][0] = v[i][c+1] = -1;
        for (int j = 0; j < c+2; j++) v[0][j] = v[f+1][j] = -1;
        int i=1,j=1;
        int dir = 0;
        while (i < v.size() and j < v[i].size() and v[i][j] < 2) {
            v[i][j]++;
            switch (dir) {
                case 0: i++;j++; break;
                case 1: i++;j--; break;
                case 2: i--;j--; break;
                case 3: i--;j++; break;
            }
            if (v[i][j]==-1) {
                bool fo = 0, end = 0;
                int odir = dir;
                if (j==0) {
                    switch (dir) {
                        case 1: dir = 0; break;
                        case 2: dir = 3; break;
                        default: end = 1;
                    }
                    if (fo) end = 1;
                    fo = 1;
                }
                if (i==0) {
                    switch (dir) {
                        case 2: dir = 1; break;
                        case 3: dir = 0; break;
                        default: end = 1;
                    }
                    if (fo) end = 1;
                    fo = 1;
                }
                if (j==c+1) {
                    switch (dir) {
                        case 0: dir = 1; break;
                        case 3: dir = 2; break;
                        default: end = 1;
                    }
                    if (fo) end = 1;
                    fo = 1;
                }
                if (i==f+1) {
                    switch (dir) {
                        case 1: dir = 2; break;
                        case 0: dir = 3; break;
                        default: end = 1;
                    }
                    if (fo) end = 1;
                    fo = 1;
                }
                switch (odir) {
                    case 0: i--;j--; break;
                    case 1: i--;j++; break;
                    case 2: i++;j++; break;
                    case 3: i++;j--; break;
                }
                //switch (dir) {
                    //case 0: i++;j++; break;
                    //case 1: i++;j--; break;
                    //case 2: i--;j--; break;
                    //case 3: i--;j++; break;
                //}
                if (end) break;
            }
        }
        for (int i=0; i < v.size(); i++) {
            for (int j=0; j < v[i].size(); j++) {
                if (v[i][j] == -1) cout << '#';
                else if (v[i][j]) cout << '0';
                else cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

}

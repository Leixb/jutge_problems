#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T,typename U>                                                   
pair<T, U> operator+(const pair<T, U> &l, const pair<T,U> &r) {   
    return {l.first + r.first, l.second + r.second};                                    
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed);
    cout.precision(4);

    int n, m;
    cin >> n >> m;
    vector< vector <char> > v(n, vector<char> (m));
    pair<int, int> ini;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            if (v[i][j] == 'C')  ini = {i, j};
        }

    const vector<pair<int, int>> desplacaments = { {-2, -1}, {-2, 1}, {-1, 2}, {-1, -2}, {1, -2}, {1, 2}, {2, -1}, {2, 1} };
    pair<int, int> res = {0, 0};

    queue<pair<pair<int, int>, int>> Q;
    Q.push({ini, 0});

    while (!Q.empty()) {
        const int dist = Q.front().second;
        const pair<int, int> pos = Q.front().first;
        Q.pop();

        if (pos.first < 0 || pos.second < 0 || pos.first >= v.size() || pos.second >= v[0].size()) continue;

        char &cela = v[pos.first][pos.second];
        if (cela == 'a') continue;
        if (cela == 'F') res = res + pair<int, int>{1, dist};
        cela = 'a';

        for (const pair<int, int> desp : desplacaments) Q.push({pos + desp, dist + 1});
    }

    if (res.first == 0) cout << "el cavall no pot arribar a cap flor" << endl;
    else cout << "flors accessibles: " << res.first << endl << "distancia mitjana: " << double(res.second)/res.first << endl;
}

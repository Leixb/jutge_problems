#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<char> > Mat;

Mat read_mat()
{
    int n,m;
    cin>>n>>m;
    Mat v(n,vector<char> (m));
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>v[i][j];
    return v;
}

void write_mat(const Mat& v)
{
    int n=int(v.size());
    int m=int(v[0].size());
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++)
            cout<<v[i][j];
        cout<<endl;
    }
    cout<<endl;
}

// Add other functions if you consider it convenient.
// Pre: v is a non-empty matrix of chars.
// Post: Returns the result of applying a central reverse to v.
// NOTE: SINCE v IS A NON-CONSTANT PARAMETER PASSED PER VALUE,
// WE CAN MODIFY ITS VALUE DIRECTLY AND RETURN IT.
Mat central_reverse(Mat v) {
    const int n = v.size(), m = v[0].size();
    for (int i = 0; i < n/2; ++i) swap(v[i], v[n-1-i]);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m/2; ++j) swap(v[i][j], v[i][m-1-j]);
    return v;
}

int main()
{
    int c;
    cin>>c;
    for (int k=0;k<c;k++) {
        Mat v=read_mat();
        write_mat(central_reverse(v));
    }
}

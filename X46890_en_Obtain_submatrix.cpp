#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<char> > Mat;

Mat read_mat() {
    int n,m;
    cin>>n>>m;
    Mat v(n,vector<char> (m));
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>v[i][j];
    return v;
}

void write_mat(const Mat& v) {
    int n=int(v.size());
    int m=int(v[0].size());
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++)
            cout<<v[i][j];
        cout<<endl;
    }
    cout<<endl;
}

// Pre: 0<=i1<=i2<n and 0<=j1<=j2<m where v is a nxm matrix.
// Post: returns a matrix with dimensions (i2-i1+1)x(j2-j1+1)
// whose elements correspond to the submatrix of v
// with rows between i1 and i2, and columns between j1 and j2.
Mat obtain_submat(const Mat& v,int i1,int j1,int i2,int j2) {
    Mat submat (i2-i1+1, vector<char> (j2-j1+1));

    for (size_t i = 0; i < submat.size(); ++i)
        for (size_t j = 0; j < submat[i].size(); ++j)
            submat[i][j] = v[i1+i][j1+j];

    return submat;
}

int main() {
    Mat v=read_mat();
    int i1,j1,i2,j2;
    while (cin>>i1>>j1>>i2>>j2)
        write_mat(obtain_submat(v,i1,j1,i2,j2));
}

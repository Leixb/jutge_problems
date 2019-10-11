#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rectangle {
    int xmin, ymin, xmax, ymax;
};

// read n rectangles from the standard input
vector<Rectangle> read_rectangles(int n) {
    vector<Rectangle> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].xmin >> v[i].ymin >> v[i].xmax >> v[i].ymax;
    return v;
}

// print the rectangles, end each rectangle followed by a line break.
void print_rectangles(const vector<Rectangle>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i].xmin << ' ' << v[i].ymin << ' '
             << v[i].xmax << ' ' << v[i].ymax << endl;
    }
}

// Pre: R.xmin<R.xmax and R.ymin<R.ymax.
// returns the area of R.
int area(const Rectangle& R) {
    return (R.xmax - R.xmin)*(R.ymax - R.ymin);
}

// returns true if and only if R1 is smaller than R2 (see the statement for a full description)
bool smaller(const Rectangle& R1, const Rectangle& R2) {
    const int a1 = area(R1), a2 = area(R2);
    if (a1 == a2) {
        if (R1.xmin == R2.xmin) {
            if (R1.ymin == R2.ymin) return R1.xmax < R2.xmax;
            return R1.ymin < R2.ymin;
        }
        return R1.xmin < R2.xmin;
    }
    return a1 < a2;
}

// Add other functions if you need them.

int main() {
    int n;
    cin >> n;
    vector<Rectangle> v = read_rectangles(n);
    // Specify correctly the sort call or implement your own sorting method.
    // sort(...);
    sort(v.begin(), v.end(), smaller);

    print_rectangles(v);
}

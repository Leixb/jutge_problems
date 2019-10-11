#include <bits/stdc++.h>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
    bool repeater;
};

void information(const vector<Student>& stu, double& mn, double& mx, double& avg) {
    mn = mx = avg = -1;
    double total = 0;
    int n = 0;
    for (auto stud : stu)
        if (!stud.repeater and stud.mark > -0.01) {
            if (mn == -1) mn = mx = stud.mark;
            else mn = min(mn,stud.mark), mx = max(mx,stud.mark);
            ++n;
            total+=stud.mark;
        }
    if (mx != -1) avg=total/double(n);
}

int main () { }

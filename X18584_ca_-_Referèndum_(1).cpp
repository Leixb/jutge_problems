#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Result {
    string city;
    string district;
    int voters;
    int yes;
    int no;
    int blank;
    int null;
};

void read_data(vector<Result>& v) {
    Result r;
    while (cin >> r.city >> r.district >> r.voters >>
            r.yes >> r.no >> r.blank >> r.null) {
        v.push_back(r);
    }
}

bool compara(const Result &a, const Result &b) {
    return a.district < b.district;  
}

void add_result(Result &r, const Result& v) {
    r.voters += v.voters;
    r.yes += v.yes;
    r.no += v.no;
    r.blank += v.blank;
    r.null += v.null;
}

int total_votes(const Result& r) {
    return r.yes + r.no + r.blank + r.null;
}

// el nombre de persones amb dret a vot, el nombre de vots, el nombre d’abstencions, el nombre de vots afirmatius, el nombre de vots negatius, el nombre de vots en blanc i el nombre de vots nuls
void print_result(const Result& r) {
    const int vots = total_votes(r);
    cout << r.district << ' ' << r.voters << ' ' << vots << ' ' << r.voters - vots << ' ' << r.yes << ' ' << r.no << ' ' << r.blank  << ' ' << r.null << endl;
}

void compute_and_print(const vector<Result>& v) {
    if (v.size() == 0) return;
    Result r = v[0];
    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i].district == r.district) {
            add_result(r, v[i]);
        } else {
            print_result(r);
            r = v[i];
        }
    }
    print_result(r);
}

int main() {
    vector<Result> v;
    read_data(v);
    sort(v.begin(), v.end(), compara);
    compute_and_print(v);
}

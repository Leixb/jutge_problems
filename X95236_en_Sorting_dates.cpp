#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Date {
    int day, month, year;
};

// reads a date given in the format DD/MM/YYYY 
Date read_date() {
    Date d; char c;
    cin >> d.day >> c >> d.month >> c >> d.year;
    return d;
}

// reads n dates given from the cin and returns them 
// in a vector<Date>
vector<Date> read_dates(int n) {
    vector<Date> V(n);
    for (int i = 0; i < n; ++i) 
        V[i] = read_date();
    return V;
}

// prints the contents of a vector<Date> with dates in the
// format DD.MM.YYYY, each date separated from the next
// by a blank space, and ending with a end-of-line
void print_dates(const vector<Date>& V) {
    int n = V.size();
    bool first = true;
    for (int i = 0; i < n; ++i) {
        if (first) first = false; else cout << " ";
        cout << V[i].day << "." << V[i].month << "."
            << V[i].year;
    }
    cout << endl;
}

// you can add function or procedure definitions here

void sort_dates(vector<Date>& V) {
    sort(V.begin(), V.end(), [](const Date& a, const Date& b) -> bool {
            if (a.year == b.year) {
                if (a.month == b.month) return a.day < b.day;
                return a.month < b.month;
            }
            return a.year < b.year;
            });
}

int main() {
    int n;
    bool first = true;
    while (cin >> n) {
        vector<Date> V = read_dates(n);
        sort_dates(V);
        if (first) first = false; else cout << endl;
        print_dates(V);
    }
}

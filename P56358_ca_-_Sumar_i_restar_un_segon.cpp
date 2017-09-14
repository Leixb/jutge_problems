#include <iostream>
using namespace std;

struct Temps { int hora, minut, segon; };

void un_segon(const Temps& t, Temps& t1, Temps& t2) {
    t1 = t;
    t2 = t;
    t1.segon++;
    if (t1.segon==60) {
        t1.segon = 0;
        t1.minut++;
        if (t1.minut==60) {
            t1.minut = 0;
            t1.hora++;
            if (t1.hora == 24) t1.hora = 0;
        }
    }
    t2.segon--;
    if (t2.segon == -1) {
        t2.segon = 59;
        t2.minut--;
        if (t2.minut == -1) {
            t2.minut = 59;
            t2.hora--;
            if (t2.hora == -1) t2.hora = 23;
        }
    }
}

int main () {
    Temps t,t1,t2;
    while (cin >> t.hora) {
        cin >> t.minut >> t.segon;
        un_segon(t,t1,t2);
        cout << t1.hora << ' ' << t1.minut << ' ' << t1.segon << endl;
        cout << t2.hora << ' ' << t2.minut << ' ' << t2.segon << endl;
    }
}

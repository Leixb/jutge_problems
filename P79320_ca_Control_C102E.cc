#include <bits/stdc++.h>
using namespace std;

int main () {
    string cabells, ulls, nas, boca;
    cin >> cabells >> ulls >> nas >> boca;

    if (cabells == "arrissats") cout << "@@@@@" << endl;
    else if (cabells == "llisos") cout << "VVVVV" << endl;
    else cout << "XXXXX" << endl;

    if (ulls == "aclucats") cout << ".-.-." << endl;
    else if (ulls == "rodons") cout << ".o-o." << endl;
    else cout << ".*-*." << endl;

    if (nas == "axafat") cout << "..0.." << endl;
    else if (nas == "aguilenc") cout << "..V.." << endl;
    else cout << "..C.." << endl;

    if (boca == "normal") cout << ".===." << endl;
    else if (boca == "bigoti") cout << ".~~~." << endl;
    else cout << ".www." << endl;
}

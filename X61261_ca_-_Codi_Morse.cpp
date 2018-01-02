#include <iostream>
#include <vector>
#include <string>
using namespace std;

// omple el vector MC amb els valors corresponents al
// codi Morse 
void fill_Morse_code(vector<string>& MC)  {
   MC = vector<string>(int('Z') - int('A') + 1);
   const int cA = int('A');
   MC[int('A') - cA] = ".-";   MC[int('B') - cA] = "-...";
   MC[int('C') - cA] = "-.-."; MC[int('D') - cA] = "-..";
   MC[int('E') - cA] = ".";    MC[int('F') - cA] = "..-.";
   MC[int('G') - cA] = "--.";  MC[int('H') - cA] = "....";
   MC[int('I') - cA] = "..";   MC[int('J') - cA] = ".---";
   MC[int('K') - cA] = "-.-";  MC[int('L') - cA] = ".-..";
   MC[int('M') - cA] = "--";   MC[int('N') - cA] = "-.";
   MC[int('O') - cA] = "---";  MC[int('P') - cA] = ".--.";
   MC[int('Q') - cA] = "--.-"; MC[int('R') - cA] = ".-.";
   MC[int('S') - cA] = "...";  MC[int('T') - cA] = "-";
   MC[int('U') - cA] = "..-";  MC[int('V') - cA] = "...-";
   MC[int('W') - cA] = ".--";  MC[int('X') - cA] = "-..-";
   MC[int('Y') - cA] = "-.--"; MC[int('Z') - cA] = "--..";
}

// afegiu definicions de funcions i/o procediments 
// en aquest punt, si ho considereu adient

// vegeu l'enunciat del problema
void encode_text_in_Morse(const vector<string>& MC) {
    bool first = true;
    for (char c; cin >> c;)
        if (c >= 'a' and c <= 'z') {
            if (!first) cout << ' ';
            else first = false;
            cout << MC[c - 'a'];
        }
        else if (c >= 'A' and c <= 'Z') {
            if (!first) cout << ' ';
            else first = false;
            cout << MC[c - 'A'];
        }
    cout << endl;
}

int main() {
     vector<string> MC;
     fill_Morse_code(MC);
     encode_text_in_Morse(MC);
}

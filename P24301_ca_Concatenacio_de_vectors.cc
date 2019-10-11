#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
     vector <int> v = v1;
     for (auto it : v2) v.push_back(it);
     return v;
}

int main () {
	
}

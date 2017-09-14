#include <cstdio>
using namespace std;

int main () {
    int n, tot;
    while (scanf("%d",&tot)==1) {
        char c;
        while (scanf("+%d",&n)==1) tot+=n;
        printf("%d\n", tot);
        scanf("%c",&c);
        if (c=='.') break;
    }
}

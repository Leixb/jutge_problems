#include <stdio.h>

int main () {
    int n, tot;
    while (scanf("%d",&tot)==1) {
        char c;
        while (scanf("+%d",&n)==1) tot+=n;
        printf("%d\n", tot);
        if (scanf("%c",&c)==1 && c=='.') break;
    }
}

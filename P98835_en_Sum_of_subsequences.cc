#include <cstdio>

int main () {
    int n, tot;
    while (scanf("%d",&tot)==1) {
        char c;
        while (scanf("+%d",&n)==1) tot+=n;
        printf("%d\n", tot);
        if (scanf("%c",&c) and c=='.') break;
    }
}

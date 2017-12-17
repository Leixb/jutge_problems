#include<stdio.h>

int main() {
    int a1, b1, c1, a2, b2, c2;
    scanf("%i %i %i %i %i %i", &a1, &b1, &c1, &a2, &b2, &c2);
    if (a1*b2 == b1*a2 && c1*a2 == c2*a1) printf("SI\n");
    else printf("NO\n");
}

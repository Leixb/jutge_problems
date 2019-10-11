#include<stdio.h>

int main() {
    int a1, b1, a2, b2;
    scanf("%i %i %i %i", &a1, &b1, &a2, &b2);
    if (a1*b2 == b1*a2) printf("No es invertible.\n");
    else printf("Es invertible.\n");
}

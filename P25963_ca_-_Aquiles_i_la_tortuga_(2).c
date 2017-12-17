#include<stdio.h>

int main() {
    double t, r;
    scanf("%lf %lf", &t, &r);
    if (r >= 1) printf("mai\n");
    else printf("%.4f segons\n", t/(1 - r));
}

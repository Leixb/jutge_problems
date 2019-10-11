#include<stdio.h>

int main() {
    double d, a, t;
    scanf("%lf %lf %lf", &d, &a, &t);
    if (t >= a) printf("mai\n");
    else printf("%.4f segons\n", d/(a - t));
}

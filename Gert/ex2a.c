#include <stdio.h>
#include <math.h>
int main () {
    int a,b,c,d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    float f = (a*a*a+(float)b/c)*(a*a*a+(float)b/c)+d;
    f = sqrt(f);
    float p = d*d-(float)a*b/c;
    p=f/p*d;
    printf("Hariu ni: %.2f", p);
}


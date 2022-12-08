#include <stdio.h>
#include <math.h>
int main () {
    int a,b,c;
    printf("a-g oruul: ");
    scanf("%d", &a);
    printf("b-g oruul: ");
    scanf("%d", &b);
    printf("c-g oruul: ");
    scanf("%d", &c);
    float d = sqrt((float)b*b-4*a*c);
    float x=(-1*b+d)/(2*a);
    float x2= (-1*b-d)/(2*a);
    printf("x=%.2f", x);
    printf("\nx=%.2f",x2);
}

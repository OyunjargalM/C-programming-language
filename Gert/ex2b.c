#include <stdio.h>
#include <math.h>
#define PI 3.141592654
int main() {
    int a,b;
    double untsug, radian, result;
    printf("a-g oruul: ");
    scanf("%d", &a);
    printf("b-g oruul: ");
    scanf("%d", &b);
    printf("Untsuguu oruul: ");
    scanf("%lf", &untsug);
    radian = (untsug * PI) / 180;
    result = cos(radian);
    double c = sqrt(b*b+a*a-2*a*b*result);
    printf("c= %.2lf", c);
}

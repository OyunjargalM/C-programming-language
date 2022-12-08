#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("a-g oruul: ");
    scanf("%d", &a);
    printf("b-g oruul: ");
    scanf("%d", &b);
    printf("c-g oruul: ");
    scanf("%d", &c);
    printf("d-g oruul: ");
    scanf("%d", &d);
    a!=0 && printf("%d", a*1000+b*100+c*10+d);
    a!=0 && printf("\n%d", a*1000+b*100+d*10+c);
    a!=0 && printf("\n%d", a*1000+c*100+d*10+b);
    a!=0 && printf("\n%d", a*1000+c*100+b*10+d);
    a!=0 && printf("\n%d", a*1000+d*100+b*10+c);
    a!=0 && printf("\n%d", a*1000+d*100+c*10+b);

    a==0 && printf("\n0%d", b*100+c*10+d);
    a==0 && printf("\n0%d", b*100+d*10+c);
    a==0 && printf("\n0%d", c*100+d*10+b);
    a==0 && printf("\n0%d", c*100+b*10+d);
    a==0 && printf("\n0%d", d*100+b*10+c);
    a==0 && printf("\n0%d", d*100+c*10+b);

    printf("\n%d", b*1000+a*100+d*10+c);
    printf("\n%d", b*1000+a*100+c*10+d);
    printf("\n%d", b*1000+c*100+d*10+a);
    printf("\n%d", b*1000+c*100+a*10+d);
    printf("\n%d", b*1000+d*100+c*10+a);
    printf("\n%d", b*1000+d*100+a*10+c);

    printf("\n%d", c*1000+a*100+d*10+b);
    printf("\n%d", c*1000+a*100+b*10+d);
    printf("\n%d", c*1000+b*100+d*10+a);
    printf("\n%d", c*1000+b*100+a*10+d);
    printf("\n%d", c*1000+d*100+a*10+b);
    printf("\n%d", c*1000+d*100+b*10+a);

    printf("\n%d", d*1000+a*100+b*10+c);
    printf("\n%d", d*1000+a*100+c*10+b);
    printf("\n%d", d*1000+c*100+a*10+b);
    printf("\n%d", d*1000+c*100+b*10+a);
    printf("\n%d", d*1000+b*100+a*10+c);
    printf("\n%d", d*1000+b*100+c*10+a);





}

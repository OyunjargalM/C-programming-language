#include<stdio.h>
int main() {
    int a,b;
    printf("a-g oruul: ");
    scanf("%d", &a);
    printf("b-g oruul: ");
    scanf("%d", &b);
    int i,min,max;
    if(a<b)
        min=a;
    else min=b;

    for(i=1;i<=min;i++) {
        if(a%i==0 && b%i==0) {
            max=i;
        }
    }
    printf("Hamgiin ih huvaagch ni: %d", max);
}

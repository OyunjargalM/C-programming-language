#include<stdio.h>
int gcd(int,int);
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    printf("Hamgiin ih eronhii huvaagch ni: %d", gcd(a,b));
}
int gcd(int a,int b) {
    int max,i,hieh;
    for(i=1;i<=a;i++) {
        if(a%i==0 && b%i==0) {
            hieh=i;
        }
    }
    return hieh;
}

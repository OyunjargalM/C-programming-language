#include<stdio.h>
int digit_sum(int);
int main() {
    int n,i;
    scanf("%d", &n);
    //printf("%d", digit_sum(n));
    for(i=1;i<=n;i++) {
        if(i%digit_sum(n)==0) {
            printf("\n%d", i);
        }
    }
}
int digit_sum(int n) {
    int sum,i,m;
    m=n;
    sum=0;
    while(m>0) {
        i=m%10;
        sum=sum+i;
        m=m/10;
    }
    return sum;
}

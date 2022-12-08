#include<stdio.h>
int main() {
    int i,n,t,sum,sum1,max,sum2,b;
    sum=0;
    sum1=0;
    printf("Toogoo oruul: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        t=1;
        sum=0;
        while(t<=i) {
            if(i%t==0) {
            sum=sum+t;

            }
            t++;
        }
    if(sum>sum1){
        sum1=sum;
        max=i;
    }
    //printf("\n%d-iin huvaagchdin niilber: %d", i,sum);
    }
    printf("Hamgiin ih huvaagchdiin niilbertei too bol: %d", max);
}

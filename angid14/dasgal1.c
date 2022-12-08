#include<stdio.h>
int main() {
    int a[100],i,n,j,sum,max,k,m;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);


    for(i=0,max=0;i<n;i++) {
        sum=0;
        for(j=a[i];j>0;){
            m=j%10;
            sum=sum+m;
            j=j/10;

        }
        //printf("\n%d", sum);
        if(max<sum) {
            max=sum;
            k=a[i];
        }
    }
    printf("\ntsipriin niilber hamgiin ih too bol: %d",k);
}

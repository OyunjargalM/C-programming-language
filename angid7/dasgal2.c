#include<stdio.h>
int main() {
    int n,a[100],i,sum,count;
    sum=0;
    printf("Angiin huuhdiin too: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("Huuhdiin ondor: ");
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        sum=sum+a[i];
    }
    float avg=(float)sum/n;
    //printf("dundaj ondor ni: %f", avg);
    for(i=0,count=0;i<n;i++) {
        if(a[i]>avg) {
            count=count+1;
        }
    }
    printf("Dundajaas deesh ondortei %d huuhed baina.", count);
}

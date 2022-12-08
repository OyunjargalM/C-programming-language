#include<stdio.h>
int main() {
    int n,i,a[100],sum,count;
    sum=0;
    printf("Huuhdiin toogoo oruul: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        sum=sum+a[i];
    }
    float avg=(float)sum/n;

    for(i=0,count=0;i<n;i++) {
        if(avg>a[i]) {
            count=count+1;
        }
    }
    printf("\nDundajaas deesh ondortei niit %d huuhed baina", count);
}

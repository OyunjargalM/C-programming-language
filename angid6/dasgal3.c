#include<stdio.h>
int main() {
    int n,a[100],i,count,count1,d,t;
    printf("1ees 99iin hoorond too oruul: ");
    scanf("%d",&n);
    if(1<=n && n<100) {
        for(i=0;i<n;i++) {
            printf("Toogoo oruul: ");
            scanf("%d", &a[i]);
        }
        for(i=0,count=0;i<n;i++) {
            d=a[i+1];
            if(a[i]>d) {
                count=count+1;
            }
        }
        if(count==n-1) {
        printf("Buurahaar erembelsen");
        }

        for(i=0,count1=0;i<n;i++) {
            t=a[i+1];
            if(a[i]<t) {
                count1=count1+1;
            }
        }
        if(count1==n-1) {
        printf("Usuhuur erembelsen");
        }
        if(count!=n-1 && count1!=n-1) {
        printf("Erembleegui");
        }
    }
    else printf("Ugugdul buruu");
}



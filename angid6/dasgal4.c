#include<stdio.h>
int main() {
    int n,a[100],i,x,b,t;
    b=0;
    printf("1ees 99iin hoorond too oruul: ");
    scanf("%d",&n);
    if(1<=n && n<100) {
        for(i=0;i<n;i++) {
            printf("Toogoo oruul: ");
            scanf("%d", &a[i]);
        }
        printf("x-iig oruul: ");
       scanf("%d", &x);
       i=0;
       while(i<=n-1) {
        if(x==a[i]) {
            b=i+1;
            t=a[i];
        }
        i++;
       }
       if(b>0) {
        printf("%d indext %d too baina", b-1,x);
       }
       else printf("-1");

    }
    else printf("Ugugdul buruu");
}



#include<stdio.h>
int main() {
    int n,a[100],i;
    printf("1ees 99iin hoorond too oruul: ");
    scanf("%d",&n);
    if(1<=n && n<100) {
        for(i=0;i<n;i++) {
            printf("Toogoo oruul: ");
            scanf("%d", &a[i]);
        }
        for(i=n-1;i>=0;i--) {
            printf("\n%d", a[i]);
        }
    }
    else printf("Ugugdul buruu");
}


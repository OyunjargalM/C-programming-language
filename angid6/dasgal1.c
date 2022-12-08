#include<stdio.h>
int main() {
    int n,a[100],i;
    printf("1ees 99iin hoorond too oruul: ");
    scanf("%d",&n);
    if(1<=n && n<100) {
        for(i=1;i<=n;i++) {
            a[i]=i;
        }
        for(i=1;i<=n;i++) {
            printf("\n%d", a[i]);
        }
    }
    else printf("ugugdul buruu");
}

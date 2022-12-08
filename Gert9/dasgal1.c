#include<stdio.h>
int palintoo(int);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",palintoo(n));
    return 0;
}
int palintoo(int n) {
    int m,k,i;
    m=n;
    k=0;
    while(m>0) {
        k=10*k+m%10;
        m=m/10;
    }
    if(k==n)
        k=1;
    else k=0;
    return k;
}

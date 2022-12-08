#include<stdio.h>
void read(int a[] ,int n){
    int i;
    for(i=0;i<n;i++)
        scanf("%d", &a[i]) ;
}
void print(int a[] ,int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d",a[i]) ;
    printf("\n");
}
int modul(int x) {
    int mod;
    if(x<0) {
        x=-1*x;
    }
    else if(x>=0)
        x=x;
    return x;
}

int sum(int a[],int n){
    int i,max=0;
    for(i=0;i<n;i++) {
        max=max+a[i];
    }
    return max;
}

int avg(int a[],int n) {
    int dundaj;
    int i,max=0;
    for(i=0;i<n;i++) {
        max=max+a[i];
    }
    dundaj=max/n;
    return dundaj;
}
int product(int a[], int n) {
    int i,mul;
    for(i=0,mul=1;i<n;i++) {
        mul=mul*a[i];
    }
    return mul;
}
int main() {
    int a[100],n,b[100];
    printf("n toonii utgiig oruul: ");
    scanf("%d", &n);
    read(a,n);
    printf("Tanii oruulsan daraalal: ");
    print(a,n);
    int mu,i;
    mu=avg(a,n);
    printf("mu-giin utga: %d\n",mu);
    for(i=0;i<n;i++) {
        b[i]=modul(a[i]-mu);
        //printf("\n%d",b[i]);
    }
    int alpha;
    alpha=product(b,n);
    printf("alpha-iin utga: %d\n", alpha);
    return 0;
}

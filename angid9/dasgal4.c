#include<stdio.h>
int A[100];
int prime_range(int,int);
int main() {
    int a,b,i;
    scanf("%d%d", &a,&b);
    printf("%d-ees %d hurtel %d anhnii too baina", a,b,prime_range(a,b));
    for(i=0;i<prime_range(a,b);i++)
        printf("\n%d", A[i]);

}
int prime_range(int a,int b) {
    int i,j,too,count,l;
    for(too=0,l=0,i=a;i<=b;i++) {
        count=0;
        for(j=1;j<=i/2;j++) {
            if(i%j==0) {
                count++;
            }
        }
        if(count==1) {
            A[l]=i;
            l++;
            too++;
        }
    }
    return too;
}



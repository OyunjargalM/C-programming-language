#include<stdio.h>
int A[100];
int count(int n);
int main() {
    int n,i;
    scanf("%d", &n);
    printf("%d tooni huvaagchdiin too %d", n,count(n));
    for(i=0;i<count(n);i++) {
        printf("\n%d", A[i]);
   }
}
int count(int n) {
    int too,i,l;
    for(i=1,l=0,too=0;i<=n;i++) {
        if(n%i==0) {
            A[l]=i;
            l++;
            too++;
        }
    }
    return too;
}


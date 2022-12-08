#include<stdio.h>
/*n toonii huvaagchdiin toog butsaana*/
int count(int n);
int main() {
    int n;
    scanf("%d", &n);
    printf("%d tooni huvaagchdiin too %d", n,count(n));
}
int count(int n) {
    int too,i;
    for(i=1,too=0;i<=n;i++) {
        if(n%i==0) {
            too++;
        }
    }
    return too;
}

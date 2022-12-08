#include<stdio.h>
int main () {
    int n;
    printf("Toogoo oruul: ");
    scanf("%d", &n);
    int i;
    for(i=1;i<=n;i++) {
    if(n%i==0)
        printf("\n%d-iin huvaagch ni: %d", n,i);
    }
}

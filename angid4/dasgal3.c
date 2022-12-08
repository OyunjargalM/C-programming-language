#include<stdio.h>
int main(){
    int n,i;
    i=1;
    scanf("%d",&n);
    do {
        printf("%d",i);
        i++;
    } while(i<n);
    printf("\n");
    return 0;
}

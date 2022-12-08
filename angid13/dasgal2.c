#include<stdio.h>
int size(int *begin, int *end);
int main() {
    int i,n;
    int *begin, *end;
    scanf("%d", &n);
    int a[n];
    printf("%d\n", size(a,a+n)); // n-ii utgiig hewlene
    return 0;
}
int size(int *begin,int *end) {
    int k = end-begin;
    return k;
}

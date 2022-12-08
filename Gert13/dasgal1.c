#include<stdio.h>
void read(int *begin, int *end);
void print(int *begin, int *end);
int main() {
    int a[100];
    read(a,a+5);
    print(a,a+5);
}
void read(int *begin, int *end){
    int i,n;
    n=end-begin;
    for(i=0;i<n;i++)
        scanf("%d", begin+i);
}
void print(int *begin, int *end){
    int i,n;
    n=end-begin;
    for(i=0;i<n;i++)
        printf("\n%d", *(begin+i));
}


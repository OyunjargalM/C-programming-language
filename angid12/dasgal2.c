#include<stdio.h>
void swap(int *a,int *b);
int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Ehleed: %d,%d\n",a,b);
    swap(&a,&b);
    printf("Daraa ni: %d,%d\n",a,b);
}
void swap(int *a,int *b) {
    int m;
    m =*a;
    *a = *b;
    *b = m;
}



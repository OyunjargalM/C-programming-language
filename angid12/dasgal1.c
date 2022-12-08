#include<stdio.h>
int main() {
    int a[100];
    int b=4;
    double c=5;
    int *p=&b;
    printf("%u\n", &a[100]);
    printf("%u\n",&b);
    printf("%u\n",&c);
}

#include<stdio.h>
void reverse(int *begin, int *end);
int main() {
    int a[5] = {3, 7, 1, 2, 4};
    reverse(a, a + 3);
    int i;
    for(i = 0; i < 5; i++)
        printf("%d", a[i]); //1 7 3 2 4
    return 0;
}
void reverse(int *begin, int *end) {
    int *solih;
    while(begin <= end) {
        solih = *begin;
        *begin = *(end - begin - 1);
        *(end - begin - 1) = solih;
        begin = begin + 4;
    }
}


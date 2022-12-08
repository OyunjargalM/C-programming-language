#include <stdio.h>
int main() {
    float a;
    printf("Shalgaltiin onoogoo oruul: ");
    scanf("%f", &a);
    float x = a*100/35;
    printf("Dun bol: %.2f", x);
    (x>=90) && printf("A");
    (x>=80 && x<90) && printf("B");
    (x>=70 && x<80) && printf("C");
    (x>=60 && x<70) && printf("D");
    (x>=0 && x<60) && printf("F");
}

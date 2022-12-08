#include<stdio.h>
int main() {
    int n;
    printf("Heden too oruulah we: ");
    scanf("%d", &n);
    int i, min, max;
    for (i = 0; i < n; ++i) {
        int value;
        printf("Toogoo oruul: ",i);
        scanf("%d", &value);
        if (i == 0) {
         min = max = value;
        }
       else {
         if (value < min)
           min = value;
         if (value > max)
           max = value;
       }
     }
     printf("\nHamgiin ih too ni: %d \nHamgiin baga too ni: %d",max,min);
     return 0;
   }


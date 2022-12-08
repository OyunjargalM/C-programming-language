#include <stdio.h>
int main() {
     int n,m,a[100][100],s=0,i,j;
     printf("Moriin toog oruul: ");
     scanf("%d", &n);
     printf("Baganiin toog oruul: ");
     scanf("%d", &m);
     for(i=0;i<n;i++) {
         s=s+1;
         for(j=0;j<m;j++) {
            a[i][j]=s;
         }
     }
     for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            printf("%d ", a[i][j]);
         }
         printf("\n");
     }
}

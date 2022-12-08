#include <stdio.h>
int main() {
    int a[10][10],b[10][10],c[10][10],n,m,k,i,j,l;
    printf("Moriin toog oruul: ");
    scanf("%d",&n);
    printf("Baganiin toog oruul: ");
    scanf("%d",&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Baganiin toog oruul: ");
    scanf("%d",&k);
    for(i=0;i<m;i++) {
        for(j=0;j<k;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<k;j++) {
            c[i][j]=0;
              for(l=0;l<m;l++) {
               c[i][j]=c[i][j]+a[i][l]*b[l][j];
                }
       }
    }
    printf("\nUrjwer ni: ");
    for(i=0;i<n;i++) {
        printf("\n");
        for(j=0;j<k;j++) {
            printf("%d ",c[i][j]);
        }
    }
}


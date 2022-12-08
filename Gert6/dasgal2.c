#include<stdio.h>
int main() {
    int n,i,j,a[100][100],sum,diagonal2,s;
    s=n+1;
    printf("n toogoo oruul: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            //printf("Husnegtiin [%d][%d] oruul: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        sum=0;
        for(j=0;j<n;j++) {
            sum=sum+a[i][j];
        }
        printf("\n%d muriin niilber: %d",i,sum);
    }
    for(j=0;j<n;j++) {
        sum=0;
        for(i=0;i<n;i++) {
            sum=sum+a[i][j];
        }
        printf("\n%d baganiin niilber: %d", j,sum);
    }
    for(sum=0,i=0;i<n;i++) {
        sum=sum+a[i][i];
    }
    printf("\nZuun diagnoliin niilber: %d", sum);
    diagonal2=0;
    for (i=0;i<n; i++) {
        for (j=0;j<n; j++) {
            if ((i+j)==(n-1))
                diagonal2= diagonal2+a[i][j];
        }
    }
    printf("\nBaruun diagnoliin niilber: %d", diagonal2);
}

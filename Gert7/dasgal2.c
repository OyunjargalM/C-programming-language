#include<stdio.h>
int main() {
    int n,a[100][100],i,j;
    printf("n toog oruul: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i+j+1<=n)
				a[i][j]=i+j+1;
			else
				a[i][j]=2*n-(i+j+1);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
}

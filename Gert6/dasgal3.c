#include<stdio.h>
int main() {
    int m,k,n,a[50][100][100],i,j,l,toot;
    printf("Ailiin toog oruul: ");
    scanf("%d", &m);
    printf("Ortsnii toog oruul: ");
    scanf("%d", &k);
    printf("Davhariin toog haruul: ");
    scanf("%d", &n);
    toot=1;
    for(i=1;i<=k;i++) {
        for(j=1;j<=n;j++) {
            for(l=1 ; l<=m ; toot++,l++){
				a[i][j][k]=toot;
				printf("%d-r ortsnii %d-r dawhriin %d-r ail: %d toot\n",i,j,l,toot);
			}
        }
    }
}

#include<stdio.h>
int *find(int a[][100], int n, int m);
int main() {
    int n,m,*k;
    int a[100][100],i,j;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
    k=find(a,n,m);
    printf("Hamgiin ih tegsh tootoi mur:");
    for(j=0;j<m;j++)
        printf("\n%d", *(k+j));

}
int *find(int a[][100], int n, int m){
    int i,j,count,max,k;
    for(max=0,i=0;i<n;i++) {
        count=0;
        for(j=0;j<m;j++) {
            if(a[i][j]%2==0)
                count++;
        }
        if(max<count) {
            max=count;
            k=i;
        }
    }
    return a+k;
}

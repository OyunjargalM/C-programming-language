#include<stdio.h>
int main() {
    int n,m,a[100][100],i,j,x,row,column,l;
    row=0;
    column=0;
    l=-1;
    printf("moriin toog oruul: ");
    scanf("%d", &n);
    printf("baganiin toog oruul: ");
    scanf("%d", &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("A husnegiin a[%d][%d] oruul: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("x-g oruul: ");
    scanf("%d", &x);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(x==a[i][j]) {
                row=i;
                column=j;
            }
        }

    }

    if(row==0 && column==0) {
         for(i=2;i<=n;i++) {
            l=l*(-1);
         }
         printf("1, %d", l);
    }
    else printf("%d too %d moriin %d baganad baina", x,row,column);

}

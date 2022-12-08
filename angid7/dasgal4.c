#include<stdio.h>
int main() {
    int n,m,i,j,a[100][100],count,count1,countx;
    printf("Muriin toog oruul: ");
    scanf("%d", &n);
    printf("Baganiin toog oruul: ");
    scanf("%d", &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    count=0;
    count1=0;
    for(j=0;j<m;j++) {
        count=0;
        for(i=0;i<n;i++) {
            if(a[i][j]%2==0){
                count=count+1;
            }
        }
        if(count1<=count) {
            count1=count;
            countx=j;
        }
        //printf("\n%d baganad %d tegsh too bna", j,count);
    }
    printf("\n[%d] baganad %d tegsh too bna", countx,count1);
}

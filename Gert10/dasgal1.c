#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void read_2darray(int a[][100], int n,int m) {
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
}
void print_2darray(int a[][100],int n , int m) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
}
void min(int a[][100],int n, int m,int row[],int col[]){
    int i,j,min;
    for(i=0;i<n;i++) {
        min=a[i][0];
        for(j=0;j<m;j++) {
            if(min>a[i][j]) {
                min=a[i][j];
            }
        }
        row[i]=min;
    }
    for(j=0;j<m;j++) {
        min=a[0][j];
        for(i=0;i<n;i++) {
            if(min>a[i][j]) {
                min=a[i][j];
            }
        }
        col[j]=min;
    }
}
int main() {
    int c_row,c_col,i;
    int A[100], B[100];
    int C[100][100];
    printf("Husnegtiin mor,baganiin toog oruul: ");
    scanf("%d%d", &c_row,&c_col);

    read_2darray(C,c_row, c_col);
    print_2darray(C, c_row, c_col);

    min(C, c_row, c_col,A,B);
    printf("Mor buriin hamgiin baga: ");
    for(i=0;i<c_row;i++) {
        printf("\n%d-r moriin hamgiin baga: %d",i,A[i]);
    }
    printf("\nbagana buriin hamgiin baga: ");
    for(i= 0;i<c_col;i++) {
        printf("\n%d-r bagana hamgiin baga: %d",i,B[i]) ;
    }
    return 0;
}

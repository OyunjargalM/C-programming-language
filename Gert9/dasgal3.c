#include<stdio.h>
void read(int A[],int n);
void print(int A[], int n);
void sort(int A[], int n);
int main() {
    int too[100],n;
    scanf("%d", &n);
    read(too,n);
    sort(too,n);
    print(too,n);
    return 0;
}
void read(int A[],int n) {
    int i;
    for(i=0;i<n;i++) {
        scanf("%d", &A[i]);
    }
}
void sort(int A[], int n) {
    int j=0,i,solih;
    while(j<n) {
        i=0;
        while(i<n-1) {
            if(A[i]>A[i+1]) {
               solih=A[i+1];
               A[i+1]=A[i];
               A[i]=solih;
            }
            i++;
        }
        j++;
    }
}
void print(int A[], int n) {
    int i;
    for(i=0;i<n;i++) {
        printf("\n%d", A[i]);
    }
}

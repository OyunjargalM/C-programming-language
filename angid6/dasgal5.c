#include<stdio.h>
int main() {
    int n,m,a[100], b[100], i,j,d;
    printf("n-iig oruul: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("%d indexiin toog oruul: ",i);
        scanf("%d", &a[i]);
    }
    printf("m-iig oruul: ");
    scanf("%d", &m);
    for(j=0;j<m;j++) {
        printf("%d indexiin toog oruul: ",j);
        scanf("%d", &b[j]);
    }
    for(i=0,d=0;i<n;i++) {
        j=0;
        while(j<m) {
            if(a[i]==b[j]){
                d=a[i];
            }
            j++;
        }
        if(d!=0) {
            printf("\nA husnegtiin %d too B hunegtend baina",d);
        }
    }
}

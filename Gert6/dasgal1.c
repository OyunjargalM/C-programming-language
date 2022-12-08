#include<stdio.h>
int main() {
    int n,m,a[100][100],b[100][100],c[100],i,j,l,k,p,q,o,count,z,w;
    printf("A husnegtiin moriin toog oruul: ");
    scanf("%d", &n);
    printf("A husnegtiin baganiin toog oruul: ");
    scanf("%d", &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("A husnegiin a[%d][%d] oruul: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("B husnegtiin moriin toog oruul: ");
    scanf("%d", &l);
    printf("B husnegtiin baganiin toog oruul: ");
    scanf("%d", &k);
    for(p=0;p<l;p++) {
        for(q=0;q<k;q++) {
            printf("B husnegiin b[%d][%d] oruul: ", p,q);
            scanf("%d", &b[p][q]);
        }
    }
    o=0;
    count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            c[o]=a[i][j];
            o++;
            count++;
        }
    }
    o=count;
    z=0;
    for(p=0;p<l;p++) {
        for(q=0;q<k;q++) {
            z=0;
            for(w=0;w<count;w++) {
                if(b[p][q]==c[w]) {
                    z++;
                }
            }
            if(z==0) {
            c[o]=b[p][q];
            o++;
            count++;
            }
        }
    }
    for(o=0;o<count;o++) {
    printf("\nC husnegt: %d", c[o]);
    }

}

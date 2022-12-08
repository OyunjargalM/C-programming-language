#include<stdio.h>
int min(int,int,int,int,int);
int main() {
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    printf("Hamgiin baga too bol: %d", min(a,b,c,d,e));
}
int min(int a,int b,int c,int d,int e) {
    if(a<b && a<c && a<d && a<e) {
        return a;
    }
    else if(b<a && b<c && b<d && b<e) {
        return b;
    }
    else if(c<b && c<a && c<d && c<e) {
        return c;
    }
    else if(d<b && d<c && d<a && d<e) {
        return d;
    }
    else if(e<b && e<c && e<d && e<a) {
        return e;
    }
}

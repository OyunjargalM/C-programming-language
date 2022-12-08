#include<stdio.h>
int main(){
    int a,b,c,d,e,t;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if(a<b) {
    t=a;
    a=b;
    b=t;
    }
    else if(a<c) {
    t=a;
    a=c;
    c=t;
    }
    else if(a<d) {
    t=a;
    a=d;
    d=t;
    }
    else if(a<e) {
    t=a;
    a=e;
    e=t;
    }
    printf("%d", e);
    if(a<b) {
    t=a;
    a=b;
    b=t;
    }
    else if(a<c) {
    t=a;
    a=c;
    c=t;
    }
    else if(a<d) {
    t=a;
    a=d;
    d=t;
    }
    else if(a<e) {
    t=a;
    a=e;
    e=t;
    }
}

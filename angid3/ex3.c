#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int sum=a+b+c+d+e;
    int max, min;
    if(a>b && a>c && a>d && a>e) {
        max=a;
        printf("\nmax: %d", a);
    }
    else if(b>a && b>c && b>d && b>e) {
        max=b;
        printf("\nmax: %d", b);
    }
    else if(c>b && c>a && c>d && c>e) {
        max=c;
        printf("\nmax: %d", c);
    }
    else if(d>b && d>c && d>a && d>e) {
        max=c;
        printf("%d", max);
        printf("max: %d", d);
    }
    else if(e>b && e>c && e>d && e>a) {
        max=e;
        printf("\nmax: %d", e);
    }
    if(a<b && a<c && a<d && a<e) {
        min=a;
        printf("\nmin: %d", a);
    }
    else if(b<a && b<c && b<d && b<e) {
        min=b;
        printf("\nmin: %d", b);
    }
    else if(c<b && c<a && c<d && c<e) {
        min=c;
        printf("\nmin: %d", c);
    }
    else if(d<b && d<c && d<a && d<e) {
        min=d;
        printf("\nmin: %d", d);
    }
    else if(e<b && e<c && e<d && e<a) {
        min=e;
        printf("\nmin: %d", e);
    }
    int zoruu=sum-(max+min);
    int max1, min1;

    //max a baihad
    if(max==a && min==b) {
        //c d e
        if(c>d && c>e)
            max1=c;
        else if(d>c && d>e)
            max1=d;
        else if(e>c && e>d)
            max1=e;
        if(c<d && c<e)
            min1=c;
        else if(d<c && d<e)
            min1=d;
        else if(e<d && e<c)
            min1=e;
    }
    if(max==a && min==c) {
        if(b>d && b>e)
            max1=b;
        else if(d>b && d>e)
            max1=b;
        else if(e>d && e>b)
            max1=e;
        if(b<d && b<e)
            min1=b;
        else if(d<e && d<c)
            min1=d;
        else if(e<d && e<b)
            min1=e;
    }
    if(max==a && min==d) {
        if(b>c && b>e)
            max1=b;
        else if(c>b && c>e)
            max1=c;
        else if(e>c && e>b)
            max1=e;
        if(b<d && b<e)
            min1=b;
        else if(c<e && c<b)
            min1=c;
        else if(e<b && e<c)
            min1=e;
    }
    if(max==a && min==e) {
        if(b>d && b>c)
            max1=b;
        else if(c>b && c>d)
            max1=c;
        else if(d>b && d>c)
            max1=d;
        if(b<d && b<c)
            min1=b;
        else if(c<d && c<b)
            min1=c;
        else if(d<b && d<c)
            min1=d;
    }
    //max b baihad
     if(max==b && min==c) {
        //c d e
        if(a>d && a>e)
            max1=a;
        else if(d>a && d>e)
            max1=d;
        else if(e>a && e>d)
            max1=e;
        if(a<d && a<e)
            min1=a;
        else if(d<a && d<e)
            min1=d;
        else if(e<a && e<d)
            min1=e;
    }
    if(max==b && min==d) {
        if(a>c && a>e)
            max1=a;
        else if(c>a && c>e)
            max1=c;
        else if(e>a && e>c)
            max1=e;
        if(a<c && a<e)
            min1=a;
        else if(c<e && c<a)
            min1=c;
        else if(e<a && e<c)
            min1=e;
    }
    if(max==b && min==e) {
        if(a>d && a>c)
            max1=a;
        else if(d>a && d>c)
            max1=d;
        else if(c>a && c>d)
            max1=c;
        if(a<d && a<c)
            min1=a;
        else if(c<a && c<d)
            min1=c;
        else if(d<c && d<a)
            min1=d;
    }
    if(max==b && min==a) {
        if(c>d && c>e)
            max1=c;
        else if(d>c && d>e)
            max1=d;
        else if(e>d && e>c)
            max1=e;
        if(c<d && c<e)
            min1=c;
        else if(d<c && d<e)
            min1=d;
        else if(e<d && e<c)
            min1=e;
    }
    //max c baihad

    if(max==c && min==a) {
        if(b>d && b>e)
            max1=b;
        else if(d>b && d>e)
            max1=d;
        else if(e>b && e>d)
            max1=e;
        if(b<d && b<e)
            min1=b;
        else if(d<c && d<e)
            min1=d;
        else if(e<d && e<b)
            min1=e;
    }
    if(max==c && min==d) {
        if(c>a && c>b)
            max1=c;
        else if(b>a && b>e)
            max1=b;
        else if(e>b && e>a)
            max1=e;
        if(a<e && a<b)
            min1=a;
        else if(b<e && b<a)
            min1=b;
        else if(e<a && e<b)
            min1=e;
    }
    if(max==c && min==e) {
        if(a>b && a>d)
            max1=a;
        else if(b>a && b>d)
            max1=b;
        else if(d>a && d>b)
            max1=d;
        if(a<d && a<b)
            min1=a;
        else if(b<a && b<d)
            min1=b;
        else if(d<a && d<b)
            min1=d;
    }
    if(max==c && min==b) {
        if(a>d && a>e)
            max1=a;
        else if(d>a && d>e)
            max1=d;
        else if(e>d && e>a)
            max1=e;
        if(a<d && a<e)
            min1=a;
        else if(d<a && d<e)
            min1=d;
        else if(e<a && e<d)
            min1=e;
    }

    zoruu=zoruu-(max1+min1);
    printf("\nDundaj too bol %d", zoruu);

}

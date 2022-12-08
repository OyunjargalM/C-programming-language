#include<stdio.h>
int main() {
    int n,d,h,a,i,t,t1,z;
    int sum=0;
    int sum1=0;
    printf("Odroo oruul: ");
    scanf("%d", &n);
    switch(n) {
        case 1:
            printf("Onoodor bol Davaa garag");

        break;
        case 2:
            printf("Onoodor bol Myagmar garag");

        break;
        case 3:
            printf("Onoodor bol Lkhagva garag");

        break;
        case 4:
            printf("Onoodor bol Purev garag");
            printf("\nHeden tsag untah we: ");
            scanf("%d", &d);
            printf("Heden hicheeltei we: ");
            scanf("%d", &h);
            if(h!=0) {
                for(i=1;i<=h;i++) {
                    printf("Hicheel tani heden tsag oroh we: ");
                    scanf("%d", &t);
                    sum=sum+t;
                }
            }
            printf("\nOor tolovloson ajil baigaa yu: ");
            scanf("%d", &a);
            if(a!=0) {
                for(i=1;i<=a;i++) {
                    printf("Ajil tani heden tsag hiigdeh we: ");
                    scanf("%d", &t1);
                    sum1=sum1+t1;
                }
            }
        sum=sum+sum1;
        z=24-sum-d;
        printf("24 tsagaas %d tsag cholootei uldej baina.", z);
        break;
        case 5:
            printf("Onoodor bol Baasan garag");
            printf("\nHeden tsag untah we: ");
            scanf("%d", &d);
            printf("Heden hicheeltei we: ");
            scanf("%d", &h);
            if(h!=0) {
                for(i=1;i<=h;i++) {
                    printf("Hicheel tani heden tsag oroh we: ");
                    scanf("%d", &t);
                    sum=sum+t;
                }
            }
            printf("\nOor tolovloson ajil baigaa yu: ");
            scanf("%d", &a);
            if(a!=0) {
                for(i=1;i<=a;i++) {
                    printf("Ajil tani heden tsag hiigdeh we: ");
                    scanf("%d", &t1);
                    sum1=sum1+t1;
                }
            }
        sum=sum+sum1;
        z=24-sum-d;
        printf("24 tsagaas %d tsag cholootei uldej baina.", z);
        break;
        case 6:
            printf("Onoodor bol Byamba garag");
            printf("\nHeden tsag untah we: ");
            scanf("%d", &d);
            printf("Heden hicheeltei we: ");
            scanf("%d", &h);
            if(h!=0) {
                for(i=1;i<=h;i++) {
                    printf("Hicheel tani heden tsag oroh we: ");
                    scanf("%d", &t);
                    sum=sum+t;
                }
            }
            printf("\nOor tolovloson ajil baigaa yu: ");
            scanf("%d", &a);
            if(a!=0) {
                for(i=1;i<=a;i++) {
                    printf("Ajil tani heden tsag hiigdeh we: ");
                    scanf("%d", &t1);
                    sum1=sum1+t1;
                }
            }
        sum=sum+sum1;
        z=24-sum-d;
        printf("24 tsagaas %d tsag cholootei uldej baina.", z);
        break;
        case 7:
            printf("Onoodor bol Nyam garag");
            printf("\nHeden tsag untah we: ");
            scanf("%d", &d);
            printf("Heden hicheeltei we: ");
            scanf("%d", &h);
            if(h!=0) {
                for(i=1;i<=h;i++) {
                    printf("Hicheel tani heden tsag oroh we: ");
                    scanf("%d", &t);
                    sum=sum+t;
                }
            }
            printf("\nOor tolovloson ajil baigaa yu: ");
            scanf("%d", &a);
            if(a!=0) {
                for(i=1;i<=a;i++) {
                    printf("Ajil tani heden tsag hiigdeh we: ");
                    scanf("%d", &t1);
                    sum1=sum1+t1;
                }
            }
        sum=sum+sum1;
        z=24-sum-d;
        printf("24 tsagaas %d tsag cholootei uldej baina.", z);
        break;
        default:
            printf("Ugugdul buruu");
            break;
    }
    printf("\nHeden tsag untah we: ");
            scanf("%d", &d);
            printf("Heden hicheeltei we: ");
            scanf("%d", &h);
            if(h!=0) {
                for(i=1;i<=h;i++) {
                    printf("Hicheel tani heden tsag oroh we: ");
                    scanf("%d", &t);
                    sum=sum+t;
                }
            }
            printf("\nOor tolovloson ajil baigaa yu: ");
            scanf("%d", &a);
            if(a!=0) {
                for(i=1;i<=a;i++) {
                    printf("Ajil tani heden tsag hiigdeh we: ");
                    scanf("%d", &t1);
                    sum1=sum1+t1;
                }
            }
        sum=sum+sum1;
        z=24-sum-d;
        printf("24 tsagaas %d tsag cholootei uldej baina.", z);
}

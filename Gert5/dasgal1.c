#include<stdio.h>
int main() {
    int i,n,k,mul,f;
    for(i=1;i<1000000000;i++) {
        k=i;
        mul=1;
        while(k>=1) {
            f=k%10;
            //printf("\n%d",f);
            mul=mul*f;
            k=(k-k%10)/10;
        }
        //printf("\n%d too %d", i,l);
        if(i%mul==0) {
        printf("\n%d", i);
        }
    }
}

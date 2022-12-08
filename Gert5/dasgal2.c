#include<stdio.h>
int main() {
    int i,n,k,l,f,q,w,count;
    for(i=1;i<200;i++) {
        k=i;
        n=0;
        l=0;
        count=0;
        while(k>=1) {
            q=k;
            f=k%10;
            while(q>=1) {
                w=q%10;
                if(w==f) {
                    count=count+1;
                }
                q=(q-q%10)/10;

            }
            n=n+f;
            k=(k-k%10)/10;
            l++;
        }
        //printf("\n%d too %d ", i,n);
        if(n<=45 && count==l) {
        printf("\n%d toonii niilber: %d", i,n);
        }
    }
}


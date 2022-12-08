#include<stdio.h>
int main() {
    int i;
    char s[]= "hello";
    char s2[20]="MUIS-iinhaan";
    for(i=0;i<strlen(s);i++) {
        s2[i]=s[i];
    }
    for(i=0;i<strlen(s);i++) {
        printf("%c",s2[i]);
    }
    //printf("%s",s2);
    return 0;
}


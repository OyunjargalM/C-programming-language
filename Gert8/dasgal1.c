#include <stdio.h>
int main() {
    char s[100];
    int i, w = 0;
    gets(s);
    for (i=0;s[i]!='\0';i++) {

        if((s[i]!=' ' && s[i+1]==' ') || (s[i+1]=='\0' && s[i]!=' ')) {
        w++;
        }
        if((s[i]<48 && s[i]>32) || (s[i]>57 && s[i]<65)) {
                if((s[i+1]>64 && s[i+1]<91) || (s[i+1]>96 && s[i+1]<122)) {
                w++;
                }
            }
    }
    printf("Niit ugnii too = %d", w );
}

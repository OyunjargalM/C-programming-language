#include <stdio.h>
#include <string.h>
int main() {
	char a[100],b[100],c[200],i,j;
	gets(a);
	gets(b);
	for(i=0;i<strlen(a);i++) {
		c[i]=a[i];
	}
	for(j=0;j<strlen(b);j++) {
        c[i]=b[j];
        i++;
	}
	for(i=0;i<strlen(c);i++) {
        printf("%c", c[i]);
	}
	putc(a);
}

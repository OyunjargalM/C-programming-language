#include <stdio.h>
#include <string.h>
int main() {
	char s[100],i,count, ch, max=0, vg=1, ih;
	gets(s);
	count=0;
	for(i=0;i<strlen(s);i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
        s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
        s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
            count++;
        }
        if((s[i]!=' ' && s[i+1]==' ') || (s[i+1]=='\0' && s[i]!=' ')) {
            if(max<count) {
                max=count;
                ih=vg;
            }
            vg++;
            count=0;
        }
        if((s[i]<48 && s[i]>32) || (s[i]>57 && s[i]<65)) {
                if((s[i+1]>64 && s[i+1]<91) || (s[i+1]>96 && s[i+1]<122)) {
                    if(max<count) {
                    max=count;
                    ih=vg;
            }
            vg++;
            count=0;
                }
            }
	}
	if(max>count )
        printf("%d-r vg hamgiin ih %d egshigtei", ih, max);
	else printf("%d-r vg hamgiin ih %d egshigtei", vg,count);
}

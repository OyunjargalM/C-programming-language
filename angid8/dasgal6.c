#include <stdio.h>
#include <string.h>
int main() {
	char s[100], i;
	gets(s);
	for(i=0;i<strlen(s);i++) {
		if(s[i]==32)
			printf("\n");
		else
			printf("%c", s[i]);

	}
}

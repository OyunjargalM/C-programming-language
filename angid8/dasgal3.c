#include <stdio.h>
#include <string.h>
int main() {
	char a[20],b[20];
	int result;
	scanf("%s %s", a, b);
	result=strcmp(a,b);
    if(result==0)
        printf("Adilhan ug baina ");
    else printf("Adilhan ug bish baina");
}

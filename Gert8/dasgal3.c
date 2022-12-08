#include <stdio.h>
#include <string.h>
int main() {
	char a[100], b[100];
	int i, j,k, count;
	gets(a);
	scanf("%s",b);
	for(i=0;i<strlen(a);i++) {
		if(a[i]==b[0]) {
			count=0;
			for(j=0; j<strlen(b); j++) {
				if(a[i+j]==b[j])
				{
					count++;
				    k=i;

				}
			}
			if(count==strlen(b))
			break;
		}

	}
	if(count==strlen(b))
	printf("%d-r index deerees tanii haij baigaa ug ehelj baina",k);
	else
	printf("-1");
}

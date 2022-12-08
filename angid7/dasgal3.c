#include <stdio.h>
int main() {
	int a[100], n,i,j,count;
	count=0;
	printf("heden too oruulah we: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0,j=n-1;i<n;i++,j--)
        if(a[i]!=a[j]) {
            count++;
        }
	if(count==0) {
		printf("Tegsh hemtei");
	}
	else printf("Tegsh hemgui");
}


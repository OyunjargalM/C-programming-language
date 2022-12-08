#include <stdio.h>
int main()
{
	int a[100], n, i, j, k;
	scanf("%d", &n);
	for(i=0 ; i<n ; i++)
		scanf("%d", &a[i]);
	for(i=0 , j=n-1 , k=0 ; i<n ; i++ , j--)
		a[i]!=a[j] && k++;
	if(k==0)
		printf("Tegsh hemtei");
	else
		printf("Tegsh hemgui");
	return 0;
}

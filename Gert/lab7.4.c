#include <stdio.h>
int main()
{
	int a[100][100], n, m, i, j, k, max, bagana;
	scanf("%d%d", &n, &m);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(j=0 ; j<m ; j++)
		a[0][j]%2==0 && max++;
	for(i=0, k=0, max=0; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			a[i][j]%2==0 && k++;
		}
	if(max<k)
	{
		bagana=i;
		max=k;
	}
	}
	printf("%d-r bagana hamgiin ih %d tegsh too aguulna", bagana, max);
}

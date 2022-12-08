#include <stdio.h>

void read(int a[], int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
}

void print(int a[], int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d", a[i]);
	printf("\n");
}

int modul(int x){
	int k;
	if(x < 0)
		k = x * (-1);
	else
		k = x;
	return k;
}

int sum(int a[], int n){
	int s, i;
	for(i = 0, s = 0; i < n; i++)
		s = s + a[i];
	return s;
}

int avg(int a[], int n){
	int k;
	k = sum(a, n) / n;
	return k;
}

int product(int a[], int n){
	int s, i;
	for(i = 0, s = 1; i < n; i++)
		s = s * a[i];
	return s;
}

int main()
{
	int a[100], n, b[100];
	printf("n toonii utgiig oruul: ");
	scanf("%d", &n);
	read(a, n);
	printf("Tanii oruulsan daraalal: ");
	print(a, n);

	int mu, i;
	mu = avg(a, n);
	printf("mu-iin utga: %d\n", mu);

	for(i = 0; i < n; i++)
		b[i] = modul(a[i] - mu);

	int alpha;
	alpha = product(b, n);
	printf("alpha-iin utga: %d\n", alpha);
	return 0;
}

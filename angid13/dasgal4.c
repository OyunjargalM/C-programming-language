#include<stdio.h>
int *find(int *begin, int *end,int x);
int main() {
    int a[5] = {3, 7, 1, 2, 1};
    int *p, x,i;
    printf("xaix too: ");
    scanf("%d", &x);
    p = find(a, a + 5, x);
    for(i=0;i<5;i++)
        printf("\n%d", a[i]);
}
int *find(int *begin, int *end, int x) {
    int y;
	while(begin <=end) {
		if(*begin == x) {
            scanf("%d", &y);
            *begin=y;
			return begin;
		}
        begin=begin+1;
	}
	return NULL;
}

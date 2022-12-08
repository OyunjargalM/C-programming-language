#include<stdio.h>
#include<math.h>
struct Point {
    int x,y;
};
double distance(struct Point a ,struct Point b);
int main() {
	struct Point a,b;
	printf("Ehnii tseg: ");
	scanf("%d%d",&a.x,&a.y);
	printf("2dohi tseg: ");
	scanf("%d%d",&b.x,&b.y);
	printf("2 tsegiin hoorondoh zai: %.2f", distance(a,b));

}
double distance(struct Point a, struct Point b){
	int z1,z2;
	float d;
    z1=(b.x-a.x)*(b.x-a.x);
	z2=(b.y-a.y)*(b.y-a.y);
	d=(float)sqrt(z1+z2);
	return d;
}



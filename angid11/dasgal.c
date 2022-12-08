#include<stdio.h>
struct Rational {
    int d,n;
};
typedef struct Rational Rational;
Rational add(Rational a,Rational b);
Rational sub(Rational a,Rational b);
Rational mult(Rational a,Rational b);
Rational divi(Rational a,Rational b);
Rational simplify(Rational a);
void print(Rational a);
int main() {
    struct Rational a;
	scanf("%d%d",&a.d,&a.n);
	struct Rational b;
	scanf("%d%d",&b.d,&b.n);
	print(a);
	a = (simplify(a));
	print(a);
	printf("\nNemeh:");
	add(a,b);
	printf("\nUrjikh:");
	mult(a,b);
	printf("\nHuwaah:");
	divi(a,b);
	printf("\nHasakh:");
	sub(a,b);

}
int hbeh(struct Rational a,struct Rational b) {
    int c,k;
    c=a.n*b.n;
    while(a.n!=b.n) {
        if(a.n>b.n){
        a.n=a.n-b.n;
        }
        else {
        b.n=b.n-a.n;
        }
    }
    k=c/a.n;
    return k;
}
Rational add(Rational a,Rational b) {
    int f, s;
	f= hbeh(a,b);
	s=(f/a.n)*a.d + (f/b.n)*b.d;
	Rational sum;
	sum.d = s;
	sum.n = f;
	print(sum);
	return sum;
}
Rational sub(Rational a, Rational b) {
	int w, s;
	w=hbeh(a,b);
	s=(w/a.n)*a.d-(w/b.n)*b.d;
	Rational substract;
	substract.d = s;
	substract.n = w;
	print(substract);
	return substract;
}
Rational mult(Rational a,Rational b) {
    int w,s;
    w=a.d*b.d;
    s=a.n*b.n;
    Rational multiply;
    multiply.d=w;
    multiply.n=s;
    print(multiply);
    return multiply;
}
Rational simplify(Rational a) {
	int i, hieh;
	for(i=1;i<=a.d;i++){
		if(a.d%i==0 && a.n%i==0)
			hieh = i;
	}
	a.d=a.d/hieh;
	a.n=a.n/hieh;
	return a;
}
Rational divi(Rational a,Rational b){
    int w,s;
    w=a.d*b.n;
    s=a.n*b.d;
    Rational Division;
    Division.d=w;
    Division.n=s;
    //simplify(Division);
    print(Division);
    return Division;
}
void print(Rational a) {
	printf("\n%d/%d", a.d, a.n);
}




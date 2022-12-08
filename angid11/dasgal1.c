#include<stdio.h>
#include<math.h>
struct triangle {
    int a,b,c; //a,b,c ni gurvaljnii 3 taliin urt
};
int main() {
    float p1,p2,s1,s2;
    struct triangle g1;
    printf("Ehnii gurvaljingiin taluudiig oruul: ");
    scanf("%d%d%d", &g1.a,&g1.b,&g1.c);
    printf("2dohi gurvaljingiin taluudiig oruul: ");
    struct triangle g2;
    scanf("%d%d%d", &g2.a,&g2.b,&g2.c);
    p1= (float)(g1.a+g1.b+g1.c)/2;
    p2= (float)(g2.a+g2.b+g2.c)/2;
	s1 = sqrt(p1*(p1-g1.a)*(p1-g1.b)*(p1-g1.c));
	s2 = sqrt(p2*(p2-g2.a)*(p2-g2.b)*(p2-g2.c));
    if(s1>s2)
        printf("Ehnii gurvaljin tom");
    else printf("2dohi gurvaljin tom");
}


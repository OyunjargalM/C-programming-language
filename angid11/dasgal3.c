#include<stdio.h>
#include<math.h>
struct triangle {
    int a,b,c; //a,b,c ni gurvaljnii 3 taliin urt
};
double find_area(int,int,int);
int main() {
    struct triangle g1;
    printf("Ehnii gurvaljingiin taluudiig oruul: ");
    scanf("\n%d%d%d", &g1.a,&g1.b,&g1.c);
    printf("2dohi gurvaljingiin taluudiig oruul: ");
    struct triangle g2;
    scanf("\n%d%d%d", &g2.a,&g2.b,&g2.c);
    if(find_area(g1.a,g1.b,g1.c)>find_area(g2.a,g2.b,g2.c))
        printf("Ehnii gurvaljin tom");
    else printf("2dohi gurvaljin tom");
}
double find_area(int a,int b,int c) {
    double p,s;
     p= (double)(a+b+c)/2;
     s = sqrt(p*(p-a)*(p-b)*(p-c));
}




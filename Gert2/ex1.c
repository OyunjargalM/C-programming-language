#include <stdio.h>
int main() {
    int x;
    printf("4 orontoi too oruul: ");
    scanf("%d", &x);
    int a=x/1000;//ehnii
    int b=x/100-a*10; //2dohi
    int c=x/10-(a*100+b*10); //3dahi
    int d=x-(a*1000+b*100+c*10);
    int y = d*1000+c*100+b*10+a;
    (x==y) && printf("Aziin too uchraas 1");
    (x!=y) && printf("Aziin too bish uchraas 0");
}

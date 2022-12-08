#include<stdio.h>
int main() {
    int o,s,u;
    printf("Onoo oruul: ");
    scanf("%d", &o);
    printf("Saraa oruul: ");
    scanf("%d", &s);
    printf("Udruu oruul: ");
    scanf("%d", &u);
    if(o<2022)
        printf("Ungursun");
    else if (o==2022) {
        if(s<3)
           printf("Ungursun");
        else if(s==3) {
            if(u<7)
                printf("Ungursun");
            else if(u>7)
                printf("Ireedui");
        }
        else if(s>3)
            printf("Ireedui");
    }
    else printf("Ireedui");
    return 0;
}

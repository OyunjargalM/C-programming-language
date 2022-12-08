#include<stdio.h>
#include<string.h>
 int main() {
    char o[20],n[20],u[20],h[20],ch[20],on[20],s[20],ud[20];
    int i;
    printf("Taniii ovog: ");
    scanf("%s", &o);
    printf("Taniii ner: ");
    scanf("%s", &n);
    printf("Taniii torson on sar odor: ");
    scanf("%s %s %s", &on,&s,&ud);
    printf("Taniii durtai ungu: ");
    scanf("%s", &u);
    printf("Taniii hobby: ");
    scanf("%s", &h);
    printf("Ta choloot tsagaaraa yu hiideg we: ");
    scanf("%s", &ch);

    sscanf(on, "%d", &i);
    printf("\n%s ovogtoi %s ni %s onii %s sariin %s udur tursun.Odoo %d nastai.", o,n,on,s,ud,2022-i);
    printf("Tuunii durtai ungu bol %s.Ter choloot tsagaaraa %s hiideg. Tuunii hobby bol %s.",u,ch,h);
}

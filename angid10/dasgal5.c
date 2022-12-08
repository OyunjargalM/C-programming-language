#include<stdio.h>
int is_valid(char pwd[]);
int main() {
    char pwd[100];
    gets(pwd);
    printf(is_valid(pwd));
}
int is_valid(char pwd[]) {
    int count,i,count1,count2,count3;
    count=0,count1=0,count2=0,count3=0;
    if(strlen(pwd)>6) {
        count++;
    }
    for(i=0,count1=0;i<strlen(pwd)-1;i++) {
        if(pwd[i]>=43 && pwd[i]<=90) {
            count1++;
        }
        if(pwd[i]>=48 && pwd[i]<=57) {
            count2++;
        }
        if((pwd[i]==63) || (pwd[i]==33) || (pwd[i]==36) || (pwd[i]==40) || (pwd[i]==41) || (pwd[i]==42) ||
           (pwd[i]==43) || (pwd[i]==45) || (pwd[i]==32)) {
            count3++;
           }
    }
    if(count==0) {
        printf("6-aas doosh urttai bna\n");
    }
    if(count1>=3){
        count++;
    }
    else printf("Dor hayj neg tom useg oroogui bna\n");

    if(count2>=3) {
            count++;
    }
    else printf("Yadaj 3 shirheg too oroogui bna\n");

    if(count3>=1) {
            count++;
    }
    else printf("Yadaj neg temdegt oroogui baina\n");
    if(count==4)
        printf("0");

}

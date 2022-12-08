#include <stdio.h>
#include <string.h>
int check(char u[], char p[]);
int main() {
    int k;
    char u[20], p[20];
	printf("Username: ");
    gets(u);
	printf("Password: ");
	gets(p);
	k=check(u,p);
	if(k== 1)
		printf("Amjilttai nevterlee");
    else
		printf("Password esvel username buruu bna");
	return 0;
}
 int check(char u[], char p[]) {
    char u1[]="bat", 					p1[]="123456";
    char u2[]="dorj",					p2[]="password";
    char u3[]="bold",					p3[]="pass247";
    char u4[]="tsetsgee",				p4[]= "justinbeaber";
    if(strcmp(u, u1)==0){
        if(strcmp(p, p1)==0)
            return 1;
    }
    if(strcmp(u, u2)==0){
        if(strcmp(p, p2)==0)
            return 1;
    }
    if(strcmp(u, u3)==0){
        if(strcmp(p, p3)==0)
            return 1;
    }
    if(strcmp(u, u4)==0){
        if(strcmp(p, p4)==0)
            return 1;
	}
    return 0;
}

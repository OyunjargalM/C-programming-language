/* s temdegten tsuvaand baigaa egshgiin toog butsaana*/
#include<stdio.h>
#include<string.h>
int count(char s[]);
int main() {
    char s[100];
    gets(s);
    printf("%d egshig baina", count(s));

}
int count(char s[]) {
    int too=0,i;
    for(i=0;i<strlen(s);i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
        s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
        s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
            too++;
        }
    }
    return too;
}

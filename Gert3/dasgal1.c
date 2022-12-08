#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a%2==0) {
    printf("Tegsh too");
        if(a%10==0 && a%4==0) {
        printf("\n10 bolon 4t zereg huvaagdaj baina");
        }
        else printf("\n10 bolon 4t zereg huvaagdahgui baina");
        if(a%2==0 && a%8==0) {
        printf("\n2 bolon 8t zereg huvaagdaj baina");
        }
        else printf("\n2 bolon 8t zereg huvaagdahgui baina");
    }
    else if (a%2!=0) {
        printf("Sondgoi too");
        if(a%3==0 && a%7==0) {
        printf("\n3 bolon 7t zereg huvaagdaj baina");
        }
        else printf("\n3 bolon 7t zereg huvaagdahgui baina");
        if(a%5==0 && a%9==0) {
        printf("\n5 bolon 9t zereg huvaagdaj baina");
        }
        else printf("\n5 bolon 9t zereg huvaagdahgui baina");
    }
    return 0;
}

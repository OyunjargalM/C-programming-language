#include<stdio.h>
#include<string.h>
void print(char a[][10], int size);
void sort(char a[][10], int size);
int search(char a[][10], char *word,int size);
int main() {
    int n;
    printf("Ugiinhee toog oruul: ");
    scanf("%d",&n);
    char a[n][10];
    int i,p;
    for(i=0;i<n;i++)
        scanf("%s", a[i]);
    print(a,n);
    sort(a,n);
    char *word;
    printf("\nHaih ugee oruul: ");
    scanf("%s", word);
    p=search(a,word,n);
    if(p==-1)
        printf("-1");
    else printf("%ddehi ug: %s", p, word);
}
void print(char a[][10], int size) {
    int i;
    printf("Hewlelt:");
    for(i=0;i<size;i++) {
        printf("\n%s", a[i]);
    }
}
void sort(char a[][10], int size) {
    int i, j;
    char solih[10];
    printf("\nEremblesnii daraa:");
    for (i=0;i<size;i++){
        for (j=i+1;j<size;j++) {
            if (strcmp(a[i], a[j])>0) {
                strcpy (solih, a[i]);
                strcpy (a[i], a[j]);
                strcpy (a[j], solih);
            }
        }
    }
    for(i=0;i<size;i++)
        printf("\n%s", a[i]);
}
int search(char a[][10], char *word,int size) {
    int i,p,result;
    for(i=0,p=-1;i<size;i++) {
         if(strcmp(word,a[i])==0)
             p=i;
    }
    return p;
}


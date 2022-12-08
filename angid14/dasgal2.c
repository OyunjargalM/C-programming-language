#include<stdio.h>
#include <string.h>
struct Course{
    char CourseName[20];
    int credit;
    int dun;
};
typedef struct Course Course;
void read_course(Course a[], int n);
void golch_bodoh(Course a[], int n);
int main() {
    Course a[100];
    int n, cmd, idx;
    printf("Hicheeliin too: ");
    scanf("%d", &n);
    read_course(a, n);
    golch_bodoh(a,n);

}
void read_course(Course a[], int n) {
    int i;
    for(i=0;i<n;i++){
        printf("%d-r hicheeliin ner, credit, dun: \n", i);
        scanf("%s", a[i].CourseName);
        scanf("%d", &a[i].credit);
        scanf("%d", &a[i].dun);
    }
}
void golch_bodoh(Course a[], int n) {
    int i,sum;
    float b[100];
    for(i=0;i<n;i++){
        if(a[i].dun>94 && a[i].dun<101){
            b[i]=4;
        }
        else if(a[i].dun>89 && a[i].dun<95){
            b[i]=3.6;
        }
        else if(a[i].dun>84 && a[i].dun<90){
            b[i]=3.1;
        }
        else if(a[i].dun>79 && a[i].dun<85){
            b[i]=2.7;
        }
        else if(a[i].dun>74 && a[i].dun<80){
            b[i]=2.3;
        }
        else if(a[i].dun>69 && a[i].dun<75){
            b[i]=1.9;
        }
        else if(a[i].dun>64 && a[i].dun<70){
            b[i]=1.4;
        }
        else if(a[i].dun>59 && a[i].dun<65){
            b[i]=1.0;
        }
        else if(a[i].dun>-1 && a[i].dun<60){
            b[i]=0;
        }
    }

    float grade_point, sum1,gpa;
    for(sum=0,sum1=0,i=0;i<n;i++){
        grade_point=0;
        sum=sum+a[i].credit;
        grade_point=(float)a[i].credit*b[i];
        printf("\n%f", grade_point);
        sum1=sum1+grade_point;
    }
    printf("\n%d", sum);
    printf("\n%f", sum1);
    gpa=(float)sum1/sum;
    printf("\n%.2f", gpa);
}

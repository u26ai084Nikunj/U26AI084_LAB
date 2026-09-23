#include<stdio.h>
int main() {
    int sub1,sub2,sub3,sub4,sub5,sum,per;
    printf("enter first subject marks: \n");
    scanf("%d",&sub1);
    printf("enter the marks in second subject: \n");
    scanf("%d",&sub2);
    printf("enter third subject marks: \n");
    scanf("%d",&sub3);
    printf("enter fourth subject marks: \n");
    scanf("%d",&sub4);
    printf("enter fifth subject marks: \n");
    scanf("%d",&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    per=sum/5;
    if (per>90) {
        printf("A+  \n");
    }
    else if (per>80 &&per<=90) {
        printf("A \n");
    }
    else if (per>70 && per<=80) {
        printf("B  \n");
    }
    else if (per>55 && per<=70){
        printf("C  \n");
    }
    else if (per>45 && per<=55){
        printf("D  \n");
    }
    else if (per<=45 && per>=0) {
        printf("F  \n");
    }
    else {
        printf("invalid input");
    }
    return 0;



}
#include<stdio.h>
int main(){
int a,b,c;
printf("enter a: \n");
scanf("%d",&a);
printf("enter b: \n");
scanf("%d",&b);
printf("enter c: \n");
scanf("%d",&c);
a>b && a>c ? printf("a= %d is maximum",a):printf("------------");
b>c && b>a ? printf("b= %d is maximum",b):printf("------------");
c>a && b>a ? printf("c= %d is maximum",c):printf("------------");
return 0;
}




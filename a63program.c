#include<stdio.h>
void swap(int*ptr1,int*ptr2);
int main(){
    int a,b,t;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("before swap\n");
    printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("after swap\n");
    printf("a=%d\nb=%d\n",a,b);
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
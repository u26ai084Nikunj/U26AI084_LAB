#include<stdio.h>
int main() {
    int N,num,max,secondmax;
    printf("enter N(no. of entries ):");
    scanf("%d",&N);
    printf("Enter number 1: \n");
    scanf("%d",&num);
    max=num;
    secondmax=num;
    for(int i=2;i<=N;i++){
        printf("Enter number %d : \n",i);
        scanf("%d",&num);
        if(max==secondmax && num<max){
            secondmax=num;
        }
        if(num>max){
            secondmax=max;
            max=num;
        }
        else if(num!=max && num>secondmax){
            secondmax=num;
        }
        
    }
    if (max==secondmax){
        printf("secondmax does not exist max =%d",max);}
    else{
    printf("max is %d and second max is %d",max,secondmax);
    }

}


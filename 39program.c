#include<stdio.h>
int main (){
    int N;
    float factorial=1,sum=0.00;
    printf("enter N:");
    scanf("%d",&N);
    for (int i=1;i<=N;i++)
    {
        factorial=factorial*i;
        sum=sum+((float)i/factorial);
         if (i<N){
            printf("%d/%d! + %\t",i,i);
        }
        if(i==N){
            printf("%d/%d! =",i,i);    
        }
    }
printf("\t%f",sum);

}
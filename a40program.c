#include<stdio.h>
int main ()
{
    int N;
    printf("enter N:");
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            if (j==i){
                printf("1");}
                else{
                    printf("0");
                }

        }
        printf("\n");
    
}
}
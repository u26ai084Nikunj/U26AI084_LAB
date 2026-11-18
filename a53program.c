#include <stdio.h>
int main(){
    int array[3][3],sum1=0,sum2=0,sum3=0;
    //inserting elements in array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("array[%d][%d]",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    //printing array+sum calculation
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (i==0){
                sum1=sum1+array[i][j];
            }
            if (i==1){
                sum2=sum2+array[i][j];
            }
            if (i==2){
                sum3=sum3+array[i][j];
            }
            
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    //sum of rows printing
    printf ("sum of row elements is \n Row 1 :%d\n Row 2 :%d\n Row 3 :%d\n",sum1,sum2,sum3);
}
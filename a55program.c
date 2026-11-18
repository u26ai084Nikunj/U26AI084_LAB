#include <stdio.h>
int main(){
    //array declarations
    int array1[3][3],array2[3][3],sum[3][3];
    //inserting array 1 elements
    printf("enter array elements:\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("array 1[%d][%d]",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
    //printing first array
    printf("\n first array:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",array1[i][j]);

        }
        printf("\n");
    }
    //inserting  array 2 elements
    printf ("\nenter second array elements :\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("array 2[%d][%d]",i,j);
            scanf("%d",&array2[i][j]);
        }
    }
    //printing 2nd array
     printf("\n second matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",array2[i][j]);

        }
        printf("\n");
    }
    //sum array creation
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            sum[i][j]=array1[i][j]+array2[i][j];
        }
    }
    //printing sum
    printf("\n sum matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sum[i][j]);

        }
        printf("\n");
    }
}
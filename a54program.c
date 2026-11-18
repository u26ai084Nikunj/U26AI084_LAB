#include <stdio.h>
int main(){
    //array declaration
    int array[3][3],tarray[3][3];
    //inserting array elements
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    //printing array
    printf("array initial:");
    for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("%d ",array[i][j]);

    }
    printf("\n");
}
//transposing-row column interchange
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        tarray[i][j]=array[j][i];
    }
}
//printing transpose 
printf("\ntranspose\n");
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("%d ",tarray[i][j]);

    }
    printf("\n");
}
}
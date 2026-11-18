#include<stdio.h>
int main(){
    //inserting and creating array
    int arr[3][3],max,min;
    printf("enter array elements:");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++ ){
            printf("array[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    max=arr[0][0];
    min=arr[0][0];
    //maximum value
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            
        }
    }
    //minimum value
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    //printing maximum and minimum values
    printf("The maximum value of array is %d",max);
    printf("The minimum value of array is %d",min);
}
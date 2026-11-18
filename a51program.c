#include<stdio.h>
int main(){
    //input n 
    int n,temp;
    printf("enter n\n");
    scanf("%d",&n);
//creating array
    int array[n], rarray[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("ARRAY:\n");
    //printing array
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    for (int  i=0;i<n;i++){
        rarray[i]=array[n-1-i];
    }
    printf("\nREVERSE ARRAY\n");

    for (int i=0;i<n;i++){
        printf("%d\t",rarray[i]);
    }
}

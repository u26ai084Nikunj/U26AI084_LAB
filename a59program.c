#include <stdio.h>
int main(){
    int n,selement,count=0;
    printf("enter n:");
    scanf("%d",&n);
    int array[n];
    printf("enter element  :");
    scanf("%d",&selement);
    //inserting array elements
    for(int i=0;i<n;i++){
        printf("array[%d]:",i);
        scanf("%d",&array[i]);
    }
    //printing array
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    
    for(int i=0;i<n;i++){
        if(array[i]==selement){
            count++;      
        }
    }
    printf("\n%d is present %d number of times\n",selement,count);



}
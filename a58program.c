#include <stdio.h>
int main(){
    int n,selement,count=0;
    printf("enter n:");
    scanf("%d",&n);
    int array[n];
    printf("enter element to search :");
    scanf("%d",&selement);
    //inserting array elements
    for(int i=0;i<n;i++){
        printf("array[%d]:",i);
        scanf("%d",&array[i]);
    }
    //printing array
    for(int i=0;i<n;i++){
        printf("\t%d",array[i]);
    }
    //linear search
    for(int i=0;i<n;i++){
        if(array[i]==selement){
            printf("\nelement present at index: %d\n",i);
        }
        else{
            count=count+1;
        }
    }
    if (count==n){
        printf("\n%d is not present in array\n",selement);
    }


}
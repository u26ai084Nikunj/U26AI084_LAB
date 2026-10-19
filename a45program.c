#include <stdio.h>
int main() {
    int arr[10];
    int countp,countn,countz;
    countp=0;
    countn=0;
    countz=0;
    for(int i=0;i<10;i++){
        printf("arr[%d] \n",i);
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            countp=countp+1;    
        }
        if(arr[i]<0){
            countn=countn+1;
        }
        if(arr[i]==0){
            countz=countz+1;
        }}
        printf("The number of positive numbers is %d ,negative numbers is %d,zero numbers is %d",countp,countn,countz);
    }
    
    
    
    

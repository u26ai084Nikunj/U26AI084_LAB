#include<stdio.h>
#include<string.h>
int main(){
    char str[20],t;
    int i=0;
    printf("enter string:\n");
    fgets(str,sizeof(str),stdin);
    printf("entered string:\n");
    fputs(str,stdout);
    while(str[i]!='\0'&& str[i]!='\n'){
        i++;
    }
    i--;
    for (int j=0;j<i;j++){
        for(int k=0;k<i-j-1;k++){
            if ((str[k]-str[k+1])>0){
                t=str[k+1];
                str[k+1]=str[k];
                str[k]=t;
            }
        }}
    printf("ordered string: \n%s",str);

}
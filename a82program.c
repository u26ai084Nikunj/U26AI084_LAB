#include<stdio.h>
int main(){
    char str[30];
    int i=0,s=0,t=1;
    printf("enter a string:\n");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'&& str[i]!='\n'){
        if(str[i]!=' '&&(i==0||str[i-1]==' ')){
            s++;
        }
        i++;
    }
    printf("total words=%d",s);
    
    printf("total number of characters:%d",i);

}
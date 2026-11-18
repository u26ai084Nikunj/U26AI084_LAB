#include <stdio.h>
int main(){
    char str[20],cpy[20];
    printf("enter a string:\n");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\0'){
        cpy[i]=str[i];
        i++;
    }
    str[i]='\0';
    cpy[i]='\0';
    printf("initial string\n");
    fputs(str,stdout);
    printf("the copied string:\n%s",cpy);


}
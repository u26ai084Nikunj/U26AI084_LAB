#include <stdio.h>
int main(){
    char str[10],rstr[10];
    int i=0,j=0;
    printf("enter string:\n");
    fgets(str,sizeof(str),stdin);
    printf("string:\n");
    fputs(str,stdout);
    while(str[i]!='\n'){
        i++;
    }
    i=i-1;
    while(i>=0){
        rstr[j]=str[i];
        j++;
        i--;
    }
    rstr[j]='\0';
    printf("reversed string:\n%s",rstr);

}
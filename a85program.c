#include<stdio.h>
int main(){
    char str[20],cr,rc;
    int i=0;
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    printf("enter character to be replaced:\n");
    scanf(" %c",&cr);
    printf("character to be replaced:%c",cr);
    printf("character to be replaced with:\n");
    scanf(" %c",&rc);
    printf("replaced by:%c",rc);
    while(str[i]!='\n'&&str[i]!='\0'){
        if(str[i]==cr){
            str[i]=rc;
        }
        i++;
    }
    printf("updated string %s ",str);

}
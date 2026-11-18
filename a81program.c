#include<stdio.h>
int main(){
    char str[30];
    int i=0,l=0,u=0,d=0,s=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\n'&&str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            l++;
        }
        else if(str[i]>='A'&&str[i]<='Z'){
            u++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            d++;
        }
        else{
        s++;
        }
        i++;


    }
    printf("THE STRING CONTAINS %d DIGITS,%d UPPER CASE CHARACTERS  ,%d LOWER CASE CHARACTER ,%d SPECIAL CHARACTERS",d,u,l,s);

}
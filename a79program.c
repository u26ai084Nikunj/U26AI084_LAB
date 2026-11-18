#include<stdio.h>
int main(){
    char str[20];
    int i=0,j=0;
    printf("enter string:");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\n'&&str[i]!='\0'){
        switch(str[i]){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':j++;
                    break;
        }
        i++;
    }
    printf("there are %d vowels in the string",j);

}
#include<stdio.h>
void countvowel(char[]);
int main(){
    char str[20];
    printf("enter string :");
    fgets(str,sizeof(str),stdin);
    countvowel(str);
}
void countvowel(char cv[]){
    int count=0,i=0;
    while(cv[i]!='\0'){
        switch(cv[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':count++;
                     break;
        }
        i++;
    }
    printf("number of vowels are %d",count);

}
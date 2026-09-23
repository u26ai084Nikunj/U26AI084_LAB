#include<stdio.h> 
int main() {
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z'  ) {
        printf("it is lowercase \n");
    }
    else if (ch>='A' && ch<='Z') {
        printf("it is upper case \n");}
        else if (ch>='0' && ch<='9') {
            printf("it is a digit \n") ;
        }
        else {
        printf("special symbol \n");
        }
        return 0;
}
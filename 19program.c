#include <stdio.h>
int main() {
    char ch;
    printf("enter character : \n");
    scanf("%c",&ch);
    ch>='a' && ch<='z'?printf("lower case \n"):printf("not in  lower case \n ");
    return 0;
    

}
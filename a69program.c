#include<stdio.h>
struct book{
    char name[20];
    float price;
    int idno;
};
void readbook(struct book *ptr);
void displaybook(struct book *ptr);
int main(){
struct book b1;
struct book *ptr;
ptr=&b1;
readbook(&b1);
displaybook(&b1);
}
void readbook(struct book *ptr){
    printf("enter idno:\n");
    scanf("%d",&ptr->idno);
    printf("enter books price\n");
    scanf("%f",&ptr->price);
    printf("enter book name\n");
    getchar();
    fgets(ptr->name,sizeof(ptr->name),stdin);
}
void displaybook(struct book *ptr){
    printf("book name:\n");
    fputs(ptr->name,stdout);
    printf("price of the book:\n");
    printf("%f",ptr->price);
    printf("id number:\n");
    printf("%d",ptr->idno);
}



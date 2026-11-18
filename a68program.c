
#include <stdio.h>

void information(int);
void display(int, char [][50], int [], int []);

int main() {
    int n;

    printf("How many books: ");
    scanf("%d", &n);

    information(n);

    return 0;
}

void information(int a) {
    char ar[a][50];
    int b[a], c[a];

    for (int i = 0; i < a; i++) {
        printf("\nEnter book name: ");
        scanf(" %49[^\n]", ar[i]);

        printf("Enter the price of the book: ");
        scanf("%d", &b[i]);

        printf("Year of publication: ");
        scanf("%d", &c[i]);
    }

    display(a, ar, b, c);
}

void display(int c, char a1[][50], int b1[], int c1[]) {
    printf("\n========== BOOK INFORMATION ==========\n");

    for (int i = 0; i < c; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book name: %s\n", a1[i]);
        printf("Book price: %d\n", b1[i]);
        printf("Publication year: %d\n", c1[i]);
    }
}

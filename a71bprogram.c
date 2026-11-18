
#include <stdio.h>

struct student {
    char name[20];
    int marks;
    int rollno;
};

void readstudents(struct student a[]);
void displaystudents(struct student b[]);

int main() {
    struct student s[10];

    readstudents(s);
    displaystudents(s);

    return 0;
}

void readstudents(struct student sd[10]) {
    for (int i = 0; i < 10; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        fgets(sd[i].name, sizeof(sd[i].name), stdin);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &sd[i].marks);

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &sd[i].rollno);

        getchar();
    }
}

void displaystudents(struct student sd[10]) {
    printf("\n\n========== STUDENT DETAILS ==========\n");

    for (int i = 0; i < 10; i++) {
        if (sd[i].marks > 500) {
            printf("\n---------- Student %d ----------\n", i + 1);

            printf("Name        : %s", sd[i].name);
            printf("Marks       : %d\n", sd[i].marks);
            printf("Roll Number : %d\n", sd[i].rollno);
        }
    }
}

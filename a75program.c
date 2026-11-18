
#include <stdio.h>

int main() {
    char str1[10], str2[10];
    int i = 0, j = 0, t = 1;

    printf("Enter string 1:\n");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\n' && str1[i] != '\0') {
        i++;
    }
    str1[i] = '\0';

    printf("Enter string 2:\n");
    fgets(str2, sizeof(str2), stdin);

    while (str2[j] != '\n' && str2[j] != '\0') {
        j++;
    }
    str2[j] = '\0';

    if (i != j) {
        t = 0;
    }
    else {
        for (int k = 0; k < i; k++) {
            if (str1[k] != str2[k]) {
                t = 0;
                break;
            }
        }
    }

    if (t == 1) {
        printf("Strings are equal");
    }
    else {
        printf("Strings are not equal");
    }

    return 0;
}
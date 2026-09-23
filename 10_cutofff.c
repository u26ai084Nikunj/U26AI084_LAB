#include <stdio.h>
int main(){
    int P;
    int M;
    int C;
    int E;
    int CM;

    printf("MARKS IN PHYSICS OUT OF 200: \n");
    scanf("%d",&P);

    printf("MARKS IN CHEMISTRY OUT OF 200: \n");
    scanf("%d",&C);

    printf("MARKS IN MATHS OUT OF 200: \n");
    scanf("%d",&M);

    printf("MARKS IN ENTRANCE EXAM OUT OF 100: \n");
    scanf("%d",&E);
    
    CM=M/2+ P/2 + C/2 + E;

    printf("Cut off mark is :  %d \n", CM);
    return 0;
}

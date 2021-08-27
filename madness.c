#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int a[] = {
        111, 2,
        3, 4,
        5, 6,
        7, 88,
        999
    };
    
    int b[][] = {
        {11, 12, 13, 14, 15},
        {1, 2, 3, 4, 5},
        {21, 22, 23, 24, 25}
    };
    
    int x;
    
    x = a[1];                  printf(" %d", x);      /* 2 */
    x = 2 [a];                 printf(" %d", x);      /* 3 */
    x = 2 [a + 1];             printf(" %d", x);      /* 4 */
    x = a[1][a];               printf(" %d", x);      /* 3 */
    x = a[1][a][a];            printf(" %d", x);      /* 4 */
    x = a[1][a][a][a];         printf(" %d   ", x);   /* 5 */
    
    x = b[1][2];               printf("  %d", x);     /* 3 */
    x = 1 [b][2];              printf("  %d", x);     /* 3 */
    x = 1 [b][2][b][2];        printf("  %d", x);     /* 3 */
    x = 1 [b][2][b][2][b][0];  printf("  %d   ", x);  /* 111 */
    
    x = 1 [b][2][b][3];        printf("  %d", x);     /* 4 */
    x = 1 [b][2][b][3][b][0];  printf("  %d", x);     /* 6 */
    x = 1 [b][2][b][3][b][1];  printf("  %d", x);     /* 7 */
    x = 1 [b][2][b][3][b][2];  printf("  %d", x);     /* 88 */
    x = 1 [b][2][b][3][b][3];  printf("  %d   ", x);  /* 999 */
    
    x = 0 [b][5];              printf("  %d", x);     /* 1 */
    x = 0 [b][5][b][1];        printf("  %d", x);     /* 2 */
    x = 0 [b][5][b][1][b][2];  printf("  %d", x);     /* 23 */
    x = 0 [b][5][b][3];        printf("  %d", x);     /* 4 */
}
